//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      GAME.CPP
//==============================

#include "widgetstart.h"
#include "widgetgame.h"
#include "widgetpause.h"
#include "widgetscore.h"
#include "game.h"
#include "object.h"

#include <string>
#include <QFile>
#include <QTextStream>
#include <cassert>
#include <fstream>
#include <sstream>

using namespace std;

// ================================ HIGHSCORE ======================================
vector<HighScore*> HighScore::highScores;

HighScore::HighScore(int highscore, string username, string diff) :
    score(highscore), username(username), difficulty(diff) { }

string HighScore::toString() {
    stringstream stream;
    stream << score << "  -  " << username << " (" << difficulty << ")";
    return stream.str();
}

string HighScore::scoresToString()
{
    stringstream stream;
    for (size_t i = 0; i < HighScore::highScores.size(); i++)
    {
        stream << (i + 1) << ". " << HighScore::highScores.at(i)->toString() << "\n";
    }

    return stream.str();
}

void HighScore::loadScores(string fileName)
{
    string data, username, difficulty;
    int score;

    ifstream strm(fileName);
    getline(strm, data);
    while (strm)
    {
        score = stoi(data.substr(0, data.find(' ')));
        data.erase(0, data.find(' ') + 1);

        username = data.substr(0, data.find(' '));
        difficulty = data.substr(data.find(' ') + 1);

        HighScore *highscore = new HighScore(score, username, difficulty);
        highScores.push_back(highscore);

        getline(strm, data);
    }
}

void HighScore::compareScore() {

    string difficulty;
    if (Game::getInstance().getDifficulty() == Game::easy)
        difficulty = "easy";
    else if (Game::getInstance().getDifficulty() == Game::medium)
        difficulty = "medium";
    else if (Game::getInstance().getDifficulty() == Game::hard)
        difficulty = "hard";

    HighScore *testScore = new HighScore(Game::getInstance().getScore(), Game::getInstance().getUsername(), difficulty);

    for (size_t i = 0; i < HighScore::highScores.size(); i++)
    {
        if (testScore->score > HighScore::highScores.at(i)->score)
        {
            HighScore::highScores.insert(HighScore::highScores.begin() + i, testScore);
            HighScore::highScores.pop_back();
            break;
        }
        else
            continue;
    }
}

void HighScore::scoresToFile(string fileName)
{
    ofstream strm(fileName);
    if (strm)
    {        
        for (size_t i = 0;  i < HighScore::highScores.size(); i++)
        {
            HighScore *curScore = HighScore::highScores.at(i);
            strm << curScore->score << " " << curScore->username << " " << curScore->difficulty << endl;
        }
    }
    strm.close();
}

void HighScore::clearScores()
{
    for (size_t i = 0; i < highScores.size(); i++)
        delete highScores.at(i);

    highScores.clear();
}

void HighScore::unitTest() { // need to fix these to reflect the new non-standard username system

    HighScore::loadScores("testScores.txt");

    assert(HighScore::highScores.at(0)->score == 1000);
    assert(HighScore::highScores.at(5)->username == "test5");
    assert(HighScore::highScores.at(6)->difficulty == "easy");


    assert(HighScore::highScores.at(8)->score == 200);
    assert(HighScore::highScores.at(8)->username == "test2");
    assert(HighScore::highScores.at(8)->difficulty == "hard");

    Game::getInstance().setDifficulty(Game::medium);
    Game::getInstance().setScore(233);
    HighScore::compareScore();

    assert(HighScore::highScores.at(8)->score == 233);
    assert(HighScore::highScores.at(8)->username == "user");
    assert(HighScore::highScores.at(8)->difficulty == "medium");

    HighScore::scoresToFile("testScores.txt");

    HighScore::loadScores("testScores.txt");

    assert(HighScore::highScores.at(0)->score == 1000);
    assert(HighScore::highScores.at(5)->username == "test5");
    assert(HighScore::highScores.at(6)->difficulty == "easy");
    assert(HighScore::highScores.at(8)->score == 233);
    assert(HighScore::highScores.at(8)->username == "user");
    assert(HighScore::highScores.at(8)->difficulty == "medium");

    HighScore::highScores.clear();

    // reset unit test file
    ofstream stream("testScores.txt");
    stream << 1000 << " test10 " << "easy" << endl;
    stream << 900 << " test9 " << "medium" << endl;
    stream << 800 << " test8 " << "hard" << endl;
    stream << 700 << " test7 " << "easy" << endl;
    stream << 600 << " test6 " << "medium" << endl;
    stream << 500 << " test5 " << "hard" << endl;
    stream << 400 << " test4 " << "easy" << endl;
    stream << 300 << " test3 " << "medium" << endl;
    stream << 200 << " test2 " << "hard" << endl;
    stream << 100 << " test1 " << "easy" << endl;
    stream.close();
}

// ================================ CHARACTER ======================================

void Character::move(int newX, int newY)
{
     x = newX;
     y = newY;
}

Character::Character()
{
    lives = 3;
    x = 590;
    y = 670;
    movingUp = false;
    movingDown = false;
    movingLeft = false;
    movingRight = false;
}

// ================================ GAME ======================================

// creates the private instance of the game
Game Game::instance;

Game::Game() : multiplier(1), multiTimer(0), invulTimer(0), slowTimer(0) {
    player = new Character();
}

Game::~Game()
{
    for (size_t i = 0; i < basics.size(); i++) { // basics vector
        delete basics.at(i);
    }
    for (size_t i = 0; i < smalls.size(); i++) { // smalls vector
        delete smalls.at(i);
    }
    for (size_t i = 0; i < explosives.size(); i++) { // explosives vector
       delete explosives.at(i);
    }
    for (size_t i = 0; i < powerups.size(); i++) { // powerups vector
        delete powerups.at(i);
    }
    basics.clear();
    smalls.clear();
    explosives.clear();
    powerups.clear();

    HighScore::clearScores();
}

bool Game::load(string fileName) {
    ifstream strm(fileName);
    string data;

    if (strm)
    {
        getline(strm, data);                // get game difficulty
        if (data == "easy") {
            Game::getInstance().setDifficulty(Game::easy);
            Game::getInstance().setObjectInt(40);
        } else if (data == "medium") {
            Game::getInstance().setDifficulty(Game::medium);
            Game::getInstance().setObjectInt(20);
        } else if (data == "hard") {
            Game::getInstance().setDifficulty(Game::hard);
            Game::getInstance().setObjectInt(10);
        }
        Game::getInstance().setTimeInt(9);

        getline(strm, data);                        // get score
        Game::getInstance().setScore(stoi(data));
        getline(strm, data);                        // get lives
        Game::getInstance().setPlayerLives(stoi(data));
        getline(strm, data);                        // get character position
        int x = stoi(data.substr(0, data.find(' ')));
        int y = stoi(data.substr(data.find(' ')));
        Game::getInstance().movePlayer(x,y);

        getline(strm,data);                         // start getting objects
        while (strm)
        {
            int objX, objY;
            bool active = false, used = false;
            string type = data.substr(0, data.find(' '));
            data.erase(0, data.find(' ') + 1);

            if (data.find(' ') != string::npos)
            {
                objX = stoi(data.substr(0, data.find(' ')));
                objY = stoi(data.substr(data.find(' ') + 1));
            }
            else if (type == "mult" || type == "slow" || type == "invul")
            {
                active = true;
                used = true;
                objX = 0;
                objY = 800;

                if (type == "mult")
                    multiTimer = stoi(data);
                else if (type == "slow")
                    slowTimer = stoi(data);
                else if (type == "invul")
                    invulTimer = stoi(data);
            }


            if (type == "basic") {
                instance.addBasic(new DamagingObject(objX, objY, ":/basic.png"));
            } else if (type == "small") {
                instance.addSmall(new DamagingObject(objX, objY, ":/small.png"));
            } else if (type == "expl") {
                instance.addExplosive(new DamagingObject(objX, objY, ":/bomb.gif"));
            } else if (type == "exlife") {
                instance.addPowerup(new ExLife(objX, objY, active, used));
            } else if (type == "mult") {
                instance.addPowerup(new Multiplier(objX, objY, active, used));
            } else if (type == "slow") {
                instance.addPowerup(new Slow(objX, objY, active, used));
            } else if (type == "invul") {
                instance.addPowerup(new Invul(objX, objY, active, used));
            }
            getline(strm, data);
        }
    }
    else
        return false;

    return true;
}

bool Game::save(string fileName) {
    ofstream strm(fileName);
    if (strm) {
        if (difficulty == Game::easy) {
            strm << "easy" << endl;
        } else if (difficulty == Game::medium) {
            strm << "medium" << endl;
        } else if (difficulty == Game::hard) {
            strm << "hard" << endl;
        }
        strm << score << endl
                      << Game::getInstance().getPlayerLives() << endl
                      << Game::getInstance().getPlayerX() << " " << Game::getInstance().getPlayerY() << endl;
        for (size_t i = 0;  i < powerups.size(); i++) {                     // save powerups
            Powerup *obj = dynamic_cast<Powerup*>(powerups.at(i));
            string data;
            if (dynamic_cast<Invul*>(obj)) {
                data = obj->stateToFile(obj, "invul");
            } else if (dynamic_cast<ExLife*>(obj)) {
                data = obj->stateToFile(obj, "exlife");
            } else if (dynamic_cast<Slow*>(obj)) {
                data = obj->stateToFile(obj, "slow");
            } else if (dynamic_cast<Multiplier*>(obj)) {
                data = obj->stateToFile(obj, "mult");
            }
            strm << data;
        }
        for (size_t i = 0;  i < basics.size(); i++) {                       // save basic objects
            Object *obj = basics.at(i);
            if (!obj->getTouched())
                strm << "basic " << obj->getX() << " " << obj->getY() << endl;
        }
        for (size_t i = 0;  i < smalls.size(); i++) {                       // save small objects
            Object *obj = smalls.at(i);
            if (!obj->getTouched())
              strm << "small " << obj->getX() << " " << obj->getY() << endl;
        }
        for (size_t i = 0;  i < explosives.size(); i++) {                   // save explosive objects
            Object *obj = explosives.at(i);
            if (!obj->getTouched())
                strm << "expl " << obj->getX() << " " << obj->getY() << endl;
        }
    }
    strm.close();
    return true;
}

void Game::clearObjVectors()
{
    for (size_t i = 0; i < basics.size(); i++) { // basics vector
        if (basics.at(i) != NULL)
            delete basics.at(i);
    }
    for (size_t i = 0; i < smalls.size(); i++) { // smalls vector
        if (smalls.at(i) != NULL)
            delete smalls.at(i);
    }
    for (size_t i = 0; i < explosives.size(); i++) { // explosives vector
        if (explosives.at(i) != NULL)
            delete explosives.at(i);
    }
    for (size_t i = 0; i < powerups.size(); i++) { // powerups vector
        if (powerups.at(i) != NULL)
            delete powerups.at(i);
    }
    basics.clear();
    smalls.clear();
    explosives.clear();
    powerups.clear();
}


void Game::reset()
{
    instance.setSlowTimer(0);
    instance.setMultiTimer(0);
    instance.setInvulTimer(0);

    instance.setScore(0);
    instance.movePlayer(590, 670);
    instance.setPlayerLives(3);

    instance.setPlayerMovingUp(false);
    instance.setPlayerMovingDown(false);
    instance.setPlayerMovingLeft(false);
    instance.setPlayerMovingRight(false);

    instance.clearObjVectors();
}
