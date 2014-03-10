//====================
//  CpS111 - Team 3 - Dodge-It
//
//      GAME.CPP
//====================

#include "widget.h"
#include "ui_widget.h"
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
using namespace std;

// ================================ HIGHSCORE ======================================

int HighScore::score = 0;

void HighScore::addToFile() {

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
    int
            newScore = HighScore::getScore();
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

Game::Game(): multiplyer(1) { }

Game::~Game() { }

//Name: UpdatePosition
//Parameters: none
//Returns:  void
//This method updates the position of all objects in the game by looping over them.
//  It uses the speed variable in each object to update.
void Game::updatePosition()
{

}

//Name:  load
//Parameters:  none
//Returns:  void
//This method is called when the user requests to load a saved game.  It will
//  resume the saved game at the point that it was saved.
void Game::load() {

}

//Name:  save
//Parameters:  none
//Returns:  void
//This method is called when the user requests to save their current game.
//  It will save the current state of the game including the score, number of lives,
//  and the locations of all falling objects and the character itself.
void Game::save() {

}

void Game::quit() {


    // close game window
    // call high score window
    // revent back to main screen
}
