#ifndef OBJECTS_H
#define OBJECTS_H

class Objects {

public:
    virtual void incrementScore();

};

//=========================================== Powerups

class Powerups : public Objects {
protected:
    bool active;
public:
    getActive() { return active; }
};

class Invul : public Powerups {
public:
    makeInvul();

};

class ExLife : public Powerups {
public:
    addLife();

};

class Slow : public Powerups { };

//=========================================== Explosives

class Explosives : public Objects {


};

//=========================================== SmallObjects

class SmallObjets : public Objects {


};

#endif // OBJECTS_H
