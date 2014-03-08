#ifndef WORLD_H
#define WORLD_H

#include <QPoint>

//=========================================== Difficulty

class Difficulty {

protected:
    double objectSpeed;




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

public:
    QPoint currPos;
    int lives;

};

//=========================================== Game Singleton

class Game {

public:
    void updatePosition();
    ~Game() { }

//**** singleton implementation ****//
private:
    static Game instance;
    Game() { }
public:
    static Game& getInstance() { return instance; }
};
#endif // WORLD_H
