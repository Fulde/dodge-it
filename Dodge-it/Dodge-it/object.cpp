//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      Object.CPP
//==============================

#include "widgetstart.h"
#include "ui_widgetstart.h"
#include "object.h"
#include "game.h"

Object::Object(string difficultyLevel) {
    if (difficultyLevel == "easy"){
        difficulty = 1;
        initSpeed = 5; // LINDSAY:: not sure what the value of this should be yet
    } else if (difficultyLevel == "medium") {
        difficulty = 2;
        initSpeed = 10; // value unknown at this point
    } else if (difficultyLevel == "hard") {
        difficulty = 3;
        initSpeed = 15; // again unknown
    }
}

//This method increments the score when the user successfully dodges a falling object. 
//  The score is incremented based on the point value of the object that was dodged.
void Object::incrementScore() {

}

//This method moves the falling object to its new location based off the speed of the object
void Object::move() {
    pixmapY += pixmapY + initSpeed;
}
