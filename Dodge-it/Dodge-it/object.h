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

    // overridden function in Powerups class
    virtual string stateToFile() { return NULL; }

public:
    // This method moves the falling object to its new location based off the speed of the object
    void move();
    Object()  { }
    ~Object() { }

    int getSpeed() { return speed; }
    int getX() { return x; }
    int getY() { return y; }
    string getPixmap() { return pixmap; }
    bool getTouched() { return touched; }

    void setPixmap(string newPix) { pixmap = newPix; }
    void setTouched(bool t) { touched = t; }
};

//========================= DAMAGING Objects =========================
class DamagingObject : public Object {
protected:
    int points;

public:
    DamagingObject(int initX, int initY, string pic);
    // destroys the Object's label once it passes off the screen
    void destroyLabel();
    // returns the number of points the user scores for successfully dodging this object
    int getPts() { return points; }
};


//========================= POWERUPS =========================
class Powerup : public Object {
protected:
    bool active;  // if the powerup is active
    bool used;    // if the powerup has been used
    int duration; // how long the powerup has left
    bool timeout;

public:
    Powerup(int initX, int labelHeight, bool isActive, bool haveUsed);
    // saves the current state of the object (location, etc.) to a file when the user saves the game
    string stateToFile(Powerup* obj, string type);
    // pure virtual overridden function in each sub-class of Powerups
    virtual void tick() = 0;
    // overridden function in each sub-class of Powerups
    virtual void activatePow();

    // returns bool of whether the powerup is active or not
    bool isActive() { return active; }
    bool getUsed() { return used; }
    int  getDuration() { return duration; }
    bool getTimeout() { return timeout; }

    void setActive(bool newValue) { active = newValue; }
    void setUsed(bool newUsed) { used = newUsed; }
    void setDuration(int newDur) { duration = newDur; }
};

// INVULNERABLE
//This powerup makes the user invulnerable from damage for a limited amount of time
class Invul : public Powerup {
public:
    Invul(int initX, int labelHeight, bool isActive, bool haveUsed) : Powerup(initX, labelHeight, isActive, haveUsed) { }
    // makes the player's lives incapable of decrementing
    void activatePow();
    // increments the InvulTimer by 1 every timer tick
    void tick();
};

// EXTRA LIFE
//This powerup gives the user an extra life
class ExLife : public Powerup {
public:
    ExLife(int initX, int labelHeight, bool isActive, bool haveUsed) : Powerup(initX, labelHeight, isActive, haveUsed) { }
    // adds 1 life to the player's lives
    void activatePow();
    void tick() { }
};

// SLOW
//This powerup slows down all falling Object for the user
class Slow : public Powerup {
public:
    Slow(int initX, int labelHeight, bool isActive, bool haveUsed) : Powerup(initX, labelHeight, isActive, haveUsed) { }
    // cut's the timer interval in half
    void activatePow();
    // increments the SlowTimer by 1 every timer tick
    void tick();
};

// MULTIPLIER
// This powerup changes the game's multiplier to 2
class Multiplier : public Powerup {
public:
    Multiplier(int initX, int labelHeight, bool isActive, bool haveUsed) : Powerup(initX, labelHeight, isActive, haveUsed) { }
    void setMultiplier();
    // sets the multiplier variable to 2
    void activatePow();
    // increments the MultiTimer by 1 every timer tick
    void tick();
};

#endif // Object_H
