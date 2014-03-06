#ifndef OBJECTS_H
#define OBJECTS_H

class Objects {

public:
    virtual void incrementScore();
    void move();
    void stateToFile();
};


//=========================================== Damaging Objects

class DamagingObjects : public Objects {

protected:
    int points;
    int damage;
    int id;

public:
    void destroyLabel();
    int getPts() { return points; }
    int getId();

};

class BasicObjects : public Objects {

};

class Explosives : public Objects {

};

class SmallObjets : public Objects {

};

//=========================================== Powerups

class Powerups : public Objects {
protected:
    bool active;
    int duration;

public:
    bool getActive() { return active; }

};

class Invul : public Powerups {

};

class ExLife : public Powerups {

};

class Slow : public Powerups {

};

#endif // OBJECTS_H
