//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      Object.CPP
//==============================

#include "widgetstart.h"
#include "ui_widgetstart.h"
#include "object.h"
#include "game.h"

DamagingObject::DamagingObject(int initX, int labelHeight) {
    Game::diffSetting difficulty = Game::getInstance().getDifficulty();
    if (difficulty == Game::easy){
        speed = 5;
    } else if (difficulty == Game::medium) {
        speed = 10;
    } else if (difficulty == Game::hard) {
        speed = 15;
    }

    x = initX;
    y = labelHeight;
}

//This method increments the score when the user successfully dodges a falling object. 
//  The score is incremented based on the point value of the object that was dodged.
void Object::incrementScore() {

}

//This method moves the falling object to its new location based off the speed of the object
void Object::move() {
    y += y + speed;
}
