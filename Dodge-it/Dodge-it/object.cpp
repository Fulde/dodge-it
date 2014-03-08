//====================
//  CpS111 - Team 3 - Dodge-It
//
//      Object.CPP
//====================

#include "widget.h"
#include "ui_widget.h"
#include "object.h"

Object::Object(string difficultyLevel) {
    if (difficultyLevel == "easy"){
        difficulty = 1;
        initSpeed = 1; // LINDSAY:: not sure what the value of this should be yet
    } else if (difficultyLevel == "medium") {
        difficulty = 2;
        initSpeed = 1.25; // value unknown at this point
    } else if (difficultyLevel == "hard") {
        difficulty = 3;
        initSpeed = 1.5; // again unknown
    }
}

//Name: incrementScore
//Parameters: none
//Returns: void
//This method increments the score when the user successfully dodges a falling object. 
//  The score is incremented based on the point value of the object that was dodged.
void Object::incrementScore()
{

}

//This method moves the falling object to its new location based off the speed of the object
void Object::move(){
    pixmapY += pixmapY + initSpeed;
}
