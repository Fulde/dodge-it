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

    //This method increments the score if the user successfully avoids the object
    virtual void incrementScore();
    //This method saves the current state of the object (location, etc.) to a file when the user saves the game
    virtual void stateToFile() = 0;

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
};

//========================= DAMAGING Objects =========================
class DamagingObject : public Object {
protected:
    void stateToFile() { }
    //the number of points the user scores for successfully avoiding this object
    int points;
    //the number of lives the user loses for running into this object
    int damage;

public:
    DamagingObject(int initX, int labelHeight);
    //destroys the Object's label once it passes off the screen
    void destroyLabel();
    //returns the number of points the user scores for successfully dodging this object
    int getPts() { return points; }
};


//========================= POWERUPS =========================
class Powerup : public Object {
protected:
    virtual void stateToFile() { }
    //boolean to test if the powerup is currently active
    static bool active;
    //integer representing how long the powerup will remain active
    int duration;

public:
    Powerup(int initX, int labelHeight);
    //returns the current state of the powerup (true = active / false = not active)
    //static bool getActive() { return active; }
    static void setActive(bool newValue) { active = newValue; }

    virtual void activatePow() = 0;
};

// INVULNERABLE
//This powerup makes the user invulnerable from damage for a limited amount of time
class Invul : public Powerup {
public:
    Invul(int initX, int labelHeight) : Powerup(initX, labelHeight) { }
    void stateToFile();
    void activatePow();
};

// EXTRA LIFE
//This powerup gives the user an extra life
class ExLife : public Powerup {
public:
    ExLife(int initX, int labelHeight) : Powerup(initX, labelHeight) { }
    void activatePow();
};

// SLOW
//This powerup slows down all falling Object for the user
class Slow : public Powerup {
public:
    Slow(int initX, int labelHeight) : Powerup(initX, labelHeight) { }
    void stateToFile();
    void activatePow();
};

// MULTIPLIER
// This powerup changes the game's multiplier to 2
class Multiplier : public Powerup {
public:
    Multiplier(int initX, int labelHeight) : Powerup(initX, labelHeight) { }
    void setMultiplier();
    void activatePow();
};

#endif // Object_H
