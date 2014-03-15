//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      Object.CPP
//==============================

#include "widgetstart.h"
#include "ui_widgetstart.h"
#include "widgetgame.h"
#include "ui_widgetgame.h"
#include "object.h"
#include "game.h"

Object::Object() { }

//This method increments the score when the user successfully dodges a falling object.
//  The score is incremented based on the point value of the object that was dodged.
void Object::incrementScore() {

}

//This method moves the falling object to its new location based off the speed of the object
void Object::move() {
    y += speed;
}

DamagingObject::DamagingObject(int initX, int labelHeight) {
    Game::diffSetting difficulty = Game::getInstance().getDifficulty();
    if (difficulty == Game::easy){
        speed = 1;
    } else if (difficulty == Game::medium) {
        speed = 3;
    } else if (difficulty == Game::hard) {
        speed = 5;
    }

    x = initX;
    y = -labelHeight;
}

Powerup::Powerup(int initX, int labelHeight) {
    Game::diffSetting difficulty = Game::getInstance().getDifficulty();
    y = 0;
    if (difficulty == Game::easy){
        speed = 1;
    } else if (difficulty == Game::medium) {
        speed = 3;
    } else if (difficulty == Game::hard) {
        speed = 5;
    }

    x = initX;
    y = -labelHeight;
}

void Invul::stateToFile() {

}

void Invul::activatePow() {

}

void ExLife::activatePow() {

}

void Slow::stateToFile() {

}

void Slow::activatePow() {

}

void Multiplier::activatePow() {

}
