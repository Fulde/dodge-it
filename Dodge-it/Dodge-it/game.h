//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      GAME.H
//==============================

// test
#ifndef WORLD_H
#define WORLD_H

#include "object.h"

#include <QPoint>
#include <string>
using namespace std;


//======================== HIGHSCORE =========================
//This class contains code to compile a high score list.

class HighScore {
    static vector<HighScore*> highScores;   // stores highscores from file at runtime

    string difficulty; // written to when the game ends
    int score;         // written to when the game ends
    string username;

public:
    HighScore(int highscore, string usrname, string diff);
    int getScore() { return score; }
    void setScore(int num) { score = num; }
    void displayScores();
    string toString();
    static void unitTest();
    static void loadScores(string fileName);
    static void compareScore(); // need to rename; name no longer applies
    static string scoresToString();
    static void scoresToFile(string fileName);
};

//========================= CHARACTER =========================
//This class contains code for the user's character.

class Character {

private:
    //Tracks the current location of the character on the game screen
    int x, y;
    //keeps record of the number of lives the character has left
    int lives;
    //tracks whether the character is currently moving in a given direction or not
    bool movingUp;
    bool movingDown;
    bool movingLeft;
    bool movingRight;

public:
    Character();
    int getX() { return x; }
    int getY() { return y; }
    void move(int newX, int newY);
    int getLives() { return lives; }
    void setLives(int newLives) { lives = newLives; }
    bool getMovingUp() { return movingUp; }
    void setMovingUp(bool value) { movingUp = value; }
    bool getMovingDown() { return movingDown; }
    void setMovingDown(bool value) { movingDown = value; }
    bool getMovingLeft() { return movingLeft; }
    void setMovingLeft(bool value) { movingLeft = value; }
    bool getMovingRight() { return movingRight; }
    void setMovingRight(bool value) { movingRight = value; }
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
    int objectInterval;
    int score;
    string username;
    int slowTimer;
    int invulTimer;
    int multiTimer;
    diffSetting difficulty;
    vector<Object*> basics;
    vector<Object*> smalls;
    vector<Object*> explosives;
    vector<Object*> powerups;

public:
    vector<Object*>& getBasics() { return basics; }
    vector<Object*>& getSmalls() { return smalls; }
    vector<Object*>& getExplosives() { return explosives; }
    vector<Object*>& getPowerups() { return powerups; }

    int getMultiplier() { return multiplier; }
    int getTimeInt() { return timeInterval; }
    int getObjectInt() { return objectInterval; }
    int getPlayerX() { return player->getX(); }
    int getPlayerY() { return player->getY(); }
    int getPlayerLives() { return player->getLives(); }
    int getSlowTimer() { return slowTimer; }
    int getInvulTimer() { return  invulTimer; }
    int getMultiTimer() { return multiTimer; }
    string getUsername() { return username; }
    diffSetting getDifficulty() { return difficulty; }
    void setPlayerLives(int newLives) { player->setLives(newLives); }
    bool getPlayerMovingUp() { return player->getMovingUp(); }
    void setPlayerMovingUp(bool value) { player->setMovingUp(value); }
    bool getPlayerMovingDown() { return player->getMovingDown(); }
    void setPlayerMovingDown(bool value) { player->setMovingDown(value); }
    bool getPlayerMovingLeft() { return player->getMovingLeft(); }
    void setPlayerMovingLeft(bool value) { player->setMovingLeft(value); }
    bool getPlayerMovingRight() { return player->getMovingRight(); }
    void setPlayerMovingRight(bool value) { player->setMovingRight(value); }
    int getScore() { return score; }


    void setMultiplier(int newMult) { multiplier = newMult; }
    void setTimeInt(int newTime) { timeInterval = newTime; }
    void setObjectInt(int newInt) { objectInterval = newInt; }
    void setDifficulty(diffSetting diff) {difficulty = diff; }
    void setScore(int newScore) { score = newScore; }
    void incScore(int incAmt) { score += incAmt; }
    void setSlowTimer(int newVal) { slowTimer = newVal; }
    void setInvulTimer(int newVal) { invulTimer = newVal; }
    void setMultiTimer(int newVal) { multiTimer = newVal; }
    void setUsername(string newUsername) { username = newUsername; }

    void addBasic(Object *obj)     { basics.push_back(obj); }
    void addSmall(Object *obj)     { smalls.push_back(obj); }
    void addExplosive(Object *obj) { explosives.push_back(obj); }
    void addPowerup(Object *obj)          { powerups.push_back(obj); }

    void movePlayer(int newX, int newY);

    //Quits the game if the player runs out of lives
    void quit();

    void clearObjVectors();
    bool save(string fileName);
    bool load(string fileName);
    ~Game();

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
