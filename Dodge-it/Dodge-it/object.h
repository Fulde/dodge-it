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
    int difficulty; // LINDSAY:: created this so that I could just multiply the difficulty to determine how fast it should move

    Object(string difficultyLevel);
// ??? LINDSAY:: shouldn't these be protected? The one time we would call these is in the children classes

    //This method increments the score if the user successfully avoids the object
    virtual void incrementScore();
    //This method moves the falling object to its new location based off the speed of the object
    void move();
    //This method saves the current state of the object (location, etc.) to a file when the user saves the game
    virtual void stateToFile() = 0;

public:
    int getSpeed() { return speed; }
};


//========================= DAMAGING Object =========================
//All damaging Object (Object that harm the character) inherit from Object.
//The user must dodge these Object to avoid losing lives and score points for dodging them.

class DamagingObject : public Object {

protected:
    void stateToFile() { }
    //the number of points the user scores for successfully avoiding this object
    int points;
    //the number of lives the user loses for running into this object
    int damage;
    //each object is given a unique id number to identify it when updating, saving, and loading the game
    int id;

public:
    DamagingObject();
    //destroys the Object's label once it passes off the screen
    void destroyLabel();
    //returns the number of points the user scores for successfully dodging this object
    int getPts() { return points; }
    
    //returns the id number of this object
    int getId() { return id; }
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
    //returns the current state of the powerup (true = active / false = not active)
    //static bool getActive() { return active; }
    static void setActive(bool newValue) { active = newValue; }

    virtual void activatePow() = 0;
};

// INVULNERABLE
//This powerup makes the user invulnerable from damage for a limited amount of time
class Invul : public Powerup {
    void stateToFile();
    void activatePow();
};

// EXTRA LIFE
//This powerup gives the user an extra life
class ExLife : public Powerup {
    void stateToFile();
    void activatePow();
};

// SLOW
//This powerup slows down all falling Object for the user
class Slow : public Powerup {
    void stateToFile();
    void activatePow();
};

// MULTIPLIER
// This powerup changes the game's multiplier to 2
class Multiplier : public Powerup {
    void setMultiplier();
};

#endif // Object_H
