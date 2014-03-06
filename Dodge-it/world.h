#ifndef WORLD_H
#define WORLD_H

#include <QPoint>

//=========================================== Difficulty

class Difficulty {

protected:
    double objectSpeed;
    int spawnCount;

public:
    getObjSpeed() { return objectSpeed; }
    getSpawnCount() { return spawnCount; }


};

class Medium : public Difficulty {


};

class Hard : public Difficulty{



};



//=========================================== HighScore

class HighScore {

public:
    bool scoreCompare();
    void addToFile();
    void displayScores();

};

//=========================================== Character

class Character {

private:
    QPoint currPos;
    int lives;

public:
    makeInvul();
    addLife();

};

//=========================================== Game Singleton

class Game {

public:
    void checkObjects();
    void slowObjects();

    ~Game();

//**** singleton implementation ****//
private:
    static Game instance;
public:
    static Game& getInstance() { return instance; }
};


#endif // WORLD_H
