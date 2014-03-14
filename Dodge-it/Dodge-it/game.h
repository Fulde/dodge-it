//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      GAME.H
//==============================

#ifndef WORLD_H
#define WORLD_H

#include "object.h"

#include <QPoint>
#include <string>
using namespace std;


//======================== HIGHSCORE =========================
//This class contains code to compile a high score list.

class HighScore {
    string difficulty; // written to when the game ends
    static int score;         // written to when the game ends
    vector<int> highScores;   // stores highscores from file at runtime
    string name;

public:
    static int getScore() { return score; }
    static void setScore(int num) { score = num; }
    bool scoreCompare();
    void displayScores();
    void sortScores() {}
    void loadScores(string file) { }
    void addToFile(int newScore);
    void unitTest();
};

//========================= CHARACTER =========================
//This class contains code for the user's character.

class Character {

private:
    //Tracks the current location of the character on the game screen
    int x, y;
    //keeps record of the number of lives the character has left
    int lives;

public:
    Character();
    void handleCollision();
    int getX() { return x; }
    int getY() { return y; }
    void move(int newX, int newY);
    int getLives() { return lives; }
    int setLives(int newLives) { lives = newLives; }
};

//========================= GAME SINGLETON =========================
//This class contains the code to implement the Game class using the Singleton design pattern

class Game {

public:
    enum diffSetting {easy, medium, hard};

private:
    Character *player;
    int multiplier;
    int timeInterval;
    diffSetting difficulty;
    vector<Object*> objects;

public:
    vector<Object*>& getObjects() { return objects; }
    int getMultiplier() { return multiplier; }
    int getTimeInterval() { return timeInterval; }
    int getPlayerX() { return player->getX(); }
    int getPlayerY() { return player->getY(); }
    diffSetting getDifficulty() { return difficulty; }

    void setMultiplier(int newMult) { multiplier = newMult; }
    void setTimeInt(int newTime) { timeInterval = newTime; }
    void setDifficulty(diffSetting diff) {difficulty = diff; }

    void addObject(DamagingObject *obj) { objects.push_back(obj); }

    void movePlayer(int newX, int newY);

    //Quits the game if the player runs out of lives
    void quit();
    //Destructor
    ~Game();
    //Method to save the current state of the game
    bool save();
    //Method to load a saved game
    void load();

//**** singleton implementation ****//
private:
    //Private instance of Game
    static Game instance;
    //Private constructor
    Game();
public:
    //Getter method (singleton pattern)
    //Returns:  the private instance of the game class
    static Game& getInstance() { return instance; }
    //Getter methods
    int getInterval() { return timeInterval; }
};
#endif // WORLD_H
