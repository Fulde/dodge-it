//====================
//  CpS111 - Team 3 - Dodge-It
//
//      GAME.H
//====================

#ifndef WORLD_H
#define WORLD_H

#include <QPoint>


//========================= DIFFICULTY ============================
//This class contains the code for the three difficulty levels.  
//The base class is the easy difficulty level, with two derived classes for medium and hard levels

//========== EASY difficulty level ==========
class Difficulty {

protected:
    //The object speed will be an integer representing the number of pixels on the y-axis that the object will travel each time the game is updated
    double speedMultiplyer;

};

//========== MEDIUM difficulty level ==========
class Medium : public Difficulty {

};

//========== HARD difficulty level ==========
class Hard : public Difficulty{

};


//======================== HIGHSCORE =========================
//This class contains code to compile a high score list.

class HighScore {

public:
    //Compares scores to compile a high score list
    bool scoreCompare();
    //Adds high scores to a saved file
    void addToFile();
    //Displays the list of high scores for the user
    void displayScores();

};



//========================= CHARACTER =========================
//This class contains code for the user's character.

class Character {

public:
    //Tracks the current location of the character on the game screen
    QPoint currPos;
    //keeps record of the number of lives the character has left
    int lives;

};



//========================= GAME SINGLETON =========================
//This class contains the code to implement the Game class using the Singleton design pattern

class Game {

public:
    //This method will updates the location of all objects in the game based on a timer.  It will iterate over each object and call its move() method
    void updatePosition();
    //Destructor
    ~Game() { }

//**** singleton implementation ****//
private:
    //Private instance of Game
    static Game instance;
    //Private constructor
    Game() { }
    //Method to save the current state of the game
    void save();
    //Method to load a saved game
    void load();
public:
    //Getter method (singleton pattern)
    //Returns:  the private instance of the game class
    static Game& getInstance() { return instance; }
};
#endif // WORLD_H
