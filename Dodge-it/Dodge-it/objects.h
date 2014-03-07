//====================
//  CpS111 - Team 3 - Dodge-It
//
//      OBJECTS.H
//====================

#ifndef OBJECTS_H
#define OBJECTS_H


// Base falling objects class.  All falling objects inherit from this class.
class Objects {

public:
    //This method increments the score if the user successfully avoids the object
    virtual void incrementScore();
    //This method moves the falling object to its new location based off the speed of the object
    void move();
    //This method saves the current state of the object (location, etc.) to a file when the user saves the game
    void stateToFile();
};


//========================= DAMAGING OBJECTS =========================
//All damaging objects (objects that harm the character) inherit from Objects.
//The user must dodge these objects to avoid losing lives and score points for dodging them.

class DamagingObjects : public Objects {

protected:
    //the number of points the user scores for successfully avoiding this object
    int points;
    //the number of lives the user loses for running into this object
    int damage;
    //each object is given a unique id number to identify it when updating, saving, and loading the game
    int id;

public:
    //Name: destroyLabel
    //Parameters: none
    //Returns: void
    //This method destroys the Object's label once it passes off the screen
    void destroyLabel();
    
    //Name: getPts
    //Parameters: none
    //Returns: int points
    //This method returns the number of points the user scores for successfully dodging this object
    int getPts() { return points; }
    
    //Name: getId
    //Parameters: none
    //Returns: int id
    //This method returns the id number of this object
    int getId() { return id; }

};


//========== BASIC OBJECT ==========
//Basic is the basic type of falling object.
//Basic objects inherit from DamagingObjects

class BasicObjects : public DamagingObejcts {

};


//========== EXPLOSIVE OBJECT ==========
//Explosive objects cause greater damage than basic objects.
//Explosive objects inherit from DamagingObjects

class Explosives : public DamagingObjects {

};


//========== SMALL OBJECT ==========
//Small objects are smaller and faster than basic objects.
//Small objects inherit from DamagingObjects

class SmallObjets : public DamagingObjects {

};



//========================= POWERUPS =========================
//Powerups are perks that the user can get.
//Powerups are a type of falling object, but do no damage. They inherit from Objects.

class Powerups : public Objects {
protected:
    //boolean to test if the powerup is currently active
    bool active;
    //integer representing how long the powerup will remain active
    int duration;

public:
    //Name: getActive
    //Parameters: none
    //Returns: bool active
    //This method returns the current state of the powerup (true = active / false = not active)
    bool getActive() { return active; }

};


//========== INVULNERABLE ==========
//This powerup makes the user invulnerable from damage for a limited amount of time
//Invul inherits from Powerups

class Invul : public Powerups {

};


//========= EXTRA LIFE ==========
//This powerup gives the user an extra life
//Extra life inherits from Powerups

class ExLife : public Powerups {

};


//========= SLOW ==========
//This powerup slows down all falling objects for the user
//Slow inherits from Powerups

class Slow : public Powerups {

};

#endif // OBJECTS_H
