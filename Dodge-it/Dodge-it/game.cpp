//====================
//  CpS111 - Team 3 - Dodge-It
//
//      GAME.CPP
//====================

#include "widget.h"
#include "ui_widget.h"
#include "game.h"


//creates the private instance of the game
Game Game::instance;

Game::Game(): multiplyer(1) {

}

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
