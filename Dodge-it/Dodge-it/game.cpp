//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      GAME.CPP
//==============================

#include "widgetstart.h"
#include "ui_widgetstart.h"
#include "widgetgame.h"
#include "ui_widgetgame.h"
#include "widgetpause.h"
#include "ui_widgetpause.h"
#include "widgetscore.h"
#include "ui_widgetscore.h"
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
  //    WidgetGame::ui->lblLives = lives;                  // need to re-show widget
    if (lives == 0) {
        Game::getInstance().quit();
    }
}

void Character::move() {

}

// ================================ GAME ======================================

//creates the private instance of the game
Game Game::instance;

Game::Game(): multiplier(1) { }

Game::~Game() { }



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

Object *Game::getMostRecent()
{
    Object* obj = objects.at(objects.size() - 1);
    return obj;
}

void Game::quit() {
    // call high score window
    // revent back to main screen
}
