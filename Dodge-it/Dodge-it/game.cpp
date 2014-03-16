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

using namespace std;

// ================================ HIGHSCORE ======================================

vector<HighScore*> HighScore::highScores;

HighScore::HighScore(int highscore, string usrname, string diff) :
    score(highscore), username(usrname), difficulty(diff) { }


void HighScore::addToFile(int newScore) {

    QFile file("highscores.txt");
    QTextStream in(&file);
    while(!in.atEnd()) {

    }

    QTextStream out(&file);
//    out << newDiff;
//    out << newScore;

    file.close();
}

string HighScore::toString()
{
    return score + " " + username + " (" + difficulty + ")";
}

string HighScore::scoresToString()
{
    string scores = "";
    for (int i = 0; i < highScores.size(); i++)
    {
        scores += highScores.at(i)->toString() + "\n\n";
    }

    return scores;
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

bool HighScore::scoreCompare() {
    string newDiff = difficulty;
    int newScore = HighScore::getScore();
    int i = 0;

    QFile file("highscores.txt");
    QTextStream in(&file);
    QString diff = in.readLine();
    int sc = in.readLine().toInt();

    while(i <= 10 && (!in.atEnd() || newScore < sc)) {
        ++i;
        diff = in.readLine();
        sc = in.readLine().toInt();
    }
    if (newScore < sc) {  // if the score is not in the top ten
        return false;
    }

    return true;
}


void HighScore::sortScores() {
    string file = "test.txt";
}

void HighScore::unitTest() { // these should only be called when specified through a command-line arg according to the assignment spec

    /*highScores.push_back(200);
    highScores.push_back(100);
    highScores.push_back(300);

    sortScores();
    assert(highScores.at(0) == 300);

    loadScores();
    assert(highScores.at(0) == 1000);

    score = 1500;
    loadScores();
    scoreCompare();
    assert(highScores.at(0) == 1500);*/
}

// ================================ CHARACTER ======================================

void Character::handleCollision() {
  //  if (Invul::getActive()) {
  //      ++lives;
  //      lblLives = "--";
  //  }
    --lives;
  //    WidgetGame::decrementLives;
    if (lives == 0) {
        Game::getInstance().quit();
    }
}

void Character::move(int newX, int newY)
{
     x = newX;
     y = newY;
}

Character::Character() { lives = 3; } // may want to supply initX and initY as parameters in future

// ================================ GAME ======================================

//creates the private instance of the game
Game Game::instance;

Game::Game() : multiplier(1)
{
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
}


// called when the user requests to load a saved game.  It will
// resume the saved game at the point that it was saved.
void Game::load() {

}

// called when the user requests to save their current game.
// It will save the current state of the game including the score, number of lives,
// and the locations of all falling objects and the character itself.
bool Game::save() {
    return true;
}


void Game::quit() {
    // call high score window
    // revent back to main screen

}

void Game::movePlayer(int newX, int newY)
{
    player->move(newX, newY);
}
