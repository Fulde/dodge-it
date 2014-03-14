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
using namespace std;

// ================================ HIGHSCORE ======================================

int HighScore::score = 0;

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

void HighScore::displayScores() {

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

void HighScore::unitTest() {

    highScores.push_back(200);
    highScores.push_back(100);
    highScores.push_back(300);

    sortScores();
    assert(highScores.at(0) == 300);

    loadScores("test.txt");
    assert(highScores.at(0) == 1000);

    score = 1500;
    loadScores("test.txt");
    scoreCompare();
    assert(highScores.at(0) == 1500);
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

Character::Character() { } // may want to supply initX and initY as parameters in future

// ================================ GAME ======================================

//creates the private instance of the game
Game Game::instance;

Game::Game() : multiplier(1)
{
    player = new Character();
}

Game::~Game()
{
    for (int i = 0; i < objects.size(); i++)
    {
        delete objects.at(i);
    }

    objects.clear();
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
