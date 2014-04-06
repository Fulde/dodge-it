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

Object::~Object() { }

//This method increments the score when the user successfully dodges a falling object.
//  The score is incremented based on the point value of the object that was dodged.
void Object::incrementScore(int score) {

}

//This method moves the falling object to its new location based off the speed of the object
void Object::move() {
    y += speed;
}

string Object::stateToFile() { return NULL; }

DamagingObject::DamagingObject(int initX, int initY, string pic) {
    //sets speed of falling object based on the selected difficulty level
    Game::diffSetting difficulty = Game::getInstance().getDifficulty();   // 1,3,5
    if (difficulty == Game::easy){
        speed = 1;
        if (pic == ":/small.png")
            speed = 2;
        else if (pic == ":/bomb.gif")
            speed = 1;
    } else if (difficulty == Game::medium) {
        speed = 3;
        if (pic == ":/small.png")
            speed = 4;
        else if (pic == ":/bomb.gif")
            speed = 2;
    } else if (difficulty == Game::hard) {
        speed = 5;
        if (pic == ":/small.png")
            speed = 6;
        else if (pic == ":/bomb.gif")
            speed = 4;
    }
    touched = false;

    pixmap = pic;
    x = initX;
    y = initY;
}

Powerup::Powerup(int initX, int initY, bool isActive, bool haveUsed) {
    Game::diffSetting difficulty = Game::getInstance().getDifficulty();
    if (difficulty == Game::easy){
        speed = 1;
    } else if (difficulty == Game::medium) {
        speed = 3;
    } else if (difficulty == Game::hard) {
        speed = 5;
    }
    touched = false;
    used = haveUsed;
    active = isActive;

    x = initX;
    y = initY;
}

string Powerup::stateToFile(Powerup* obj, string type) {
    string data = type + " ";
    if (obj->isActive()) {
        data = data + to_string(obj->getDuration()) + "\n";
    } else if (!obj->isActive() && !obj->getTouched()) {
        data = data + to_string(obj->getX()) + " " + to_string(obj->getY()) + "\n";
    }
    return data;
}

void Powerup::activatePow() {
    active = true;
    used = true;
}

void Invul::activatePow() {
    if (Game::getInstance().getInvulTimer() > 0)
        return;
    else
        Powerup::activatePow();
        Game::getInstance().setInvulTimer(0);
}

void ExLife::activatePow() {
    Powerup::activatePow();

    if (Game::getInstance().getPlayerLives() < 3)
    {
        Game::getInstance().setPlayerLives(Game::getInstance().getPlayerLives() + 1);
        active = true;
    }
    else
        active = false;
}

void Slow::activatePow() {
    if (Game::getInstance().getSlowTimer() > 0)
        return;
    else
        Powerup::activatePow();
        Game::getInstance().setSlowTimer(0);
}

void Multiplier::activatePow() {
    if (Game::getInstance().getMultiTimer() > 0)
        return;
    else
        Powerup::activatePow();
        Game::getInstance().setMultiTimer(0);
}




void Invul::tick()
{
    Game::getInstance().setInvulTimer(Game::getInstance().getInvulTimer() + 1);
    duration = Game::getInstance().getInvulTimer();
    if(Game::getInstance().getInvulTimer() == 500)
    {
        active = false;
        timeout = true;
        Game::getInstance().setInvulTimer(0);
    }
}

void ExLife::tick()
{

}

void Slow::tick()
{
    Game::getInstance().setSlowTimer(Game::getInstance().getSlowTimer() + 1);
    duration = Game::getInstance().getSlowTimer();
    if (Game::getInstance().getSlowTimer() == 500)
    {
        active = false;
        timeout = true;
        Game::getInstance().setSlowTimer(0);
    }
}

void Multiplier::tick()
{
    Game::getInstance().setMultiTimer(Game::getInstance().getMultiTimer() + 1);
    duration = Game::getInstance().getMultiTimer();
    if(Game::getInstance().getMultiTimer() == 500)
    {
        active = false;
        timeout = true;
        Game::getInstance().setMultiTimer(0);
    }
}
