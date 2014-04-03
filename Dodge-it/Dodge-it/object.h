//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      Object.H
//==============================

#ifndef Object_H
#define Object_H

#include <string>
using namespace std;

// Base falling Object class.  All falling Object inherit from this class.
class Object {

protected:
    int speed;
    int x;
    int y;
    string pixmap;
    bool touched;

    //This method increments the score if the user successfully avoids the object
    virtual void incrementScore(int score);
    //This method saves the current state of the object (location, etc.) to a file when the user saves the game
    virtual string stateToFile();

public:
    //This method moves the falling object to its new location based off the speed of the object
    void move();
    Object();
    ~Object();
    int getSpeed() { return speed; }
    int getX() { return x; }
    int getY() { return y; }
    string getPixmap() { return pixmap; }
    void setPixmap(string newPix) { pixmap = newPix; }
    bool getTouched() { return touched; }
    void setTouched(bool t) { touched = t; }
};

//========================= DAMAGING Objects =========================
class DamagingObject : public Object {
protected:
    //the number of points the user scores for successfully avoiding this object
    int points;
    //the number of lives the user loses for running into this object
    int damage;

public:
    DamagingObject(int initX, int initY);
    //destroys the Object's label once it passes off the screen
    void destroyLabel();
    //returns the number of points the user scores for successfully dodging this object
    int getPts() { return points; }
};


//========================= POWERUPS =========================
class Powerup : public Object {
protected:
    //boolean to test if the powerup is currently active
    bool active;
    // boolean to test if the powerup has already been used
    bool used;
    //integer representing how long the powerup will remain active
    int duration;
    unsigned int id;

public:
    Powerup(int initX, int labelHeight, bool isActive, bool haveUsed);
    string stateToFile(Powerup* obj, string type);

    void setActive(bool newValue) { active = newValue; }
    void setUsed(bool newUsed) { used = newUsed; }

    bool getActive() { return active; }
    bool getUsed() { return used; }
    int  getDuration() { return duration; }
    int getId() { return id; }
    void setDuration(int newDur) { duration = newDur; }

    virtual void activatePow() = 0;
};

// INVULNERABLE
//This powerup makes the user invulnerable from damage for a limited amount of time
class Invul : public Powerup {
public:
    Invul(int initX, int labelHeight, bool isActive, bool haveUsed) : Powerup(initX, labelHeight, isActive, haveUsed) { }
    void activatePow();
};

// EXTRA LIFE
//This powerup gives the user an extra life
class ExLife : public Powerup {
public:
    ExLife(int initX, int labelHeight, bool isActive, bool haveUsed) : Powerup(initX, labelHeight, isActive, haveUsed) { }
    void activatePow();
};

// SLOW
//This powerup slows down all falling Object for the user
class Slow : public Powerup {
public:
    Slow(int initX, int labelHeight, bool isActive, bool haveUsed) : Powerup(initX, labelHeight, isActive, haveUsed) { }
    void activatePow();
};

// MULTIPLIER
// This powerup changes the game's multiplier to 2
class Multiplier : public Powerup {
public:
    Multiplier(int initX, int labelHeight, bool isActive, bool haveUsed) : Powerup(initX, labelHeight, isActive, haveUsed) { }
    void setMultiplier();
    void activatePow();
};

#endif // Object_H
