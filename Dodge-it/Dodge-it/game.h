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
class HighScore {
    static vector<HighScore*> highScores;   // stores highscores from file at runtime

    string difficulty; // written to when the game ends
    int score;         // written to when the game ends
    string username;

public:
    HighScore(int highscore, string usrname, string diff);
    // returns the current score information in a high-score format
    string toString();
    // unit tests to be called from the command line
    static void unitTest();
    // loads all of the high scores from the text file into a vector
    static void loadScores(string fileName);

    // tests how a score compares to the highscore list
    static void compareScore();
    // convert highscores to custom string fornmat and returns custom string
    static string scoresToString();
    // writes the new list of high scores to the text file
    static void scoresToFile(string fileName);
    // removes all entries in the high scores vector
    static void clearScores();

    int getScore() { return score; }
    void setScore(int num) { score = num; }
};

//========================= CHARACTER =========================
class Character {

private:
    int  x, y;
    int  lives;
    bool movingUp;
    bool movingDown;
    bool movingLeft;
    bool movingRight;

public:
    Character();
    // moves the charecter to <newX> and <newY>
    void move(int newX, int newY);

    int  getX() { return x; }
    int  getY() { return y; }
    int  getLives() { return lives; }
    bool getMovingUp() { return movingUp; }
    bool getMovingDown() { return movingDown; }
    bool getMovingLeft() { return movingLeft; }
    bool getMovingRight() { return movingRight; }

    void setLives(int newLives) { lives = newLives; }
    void setMovingUp(bool value) { movingUp = value; }
    void setMovingDown(bool value) { movingDown = value; }
    void setMovingLeft(bool value) { movingLeft = value; }
    void setMovingRight(bool value) { movingRight = value; }
};

//========================= GAME SINGLETON =========================
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
    bool cheatMode;
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
    int getScore() { return score; }
    bool getCheatMode() { return cheatMode; }
    void setPlayerLives(int newLives) { player->setLives(newLives); }
    bool getPlayerMovingUp() { return player->getMovingUp(); }
    void setPlayerMovingUp(bool value) { player->setMovingUp(value); }
    bool getPlayerMovingDown() { return player->getMovingDown(); }
    void setPlayerMovingDown(bool value) { player->setMovingDown(value); }
    bool getPlayerMovingLeft() { return player->getMovingLeft(); }
    void setPlayerMovingLeft(bool value) { player->setMovingLeft(value); }
    bool getPlayerMovingRight() { return player->getMovingRight(); }
    void setPlayerMovingRight(bool value) { player->setMovingRight(value); }


    void setMultiplier(int newMult) { multiplier = newMult; }
    void setTimeInt(int newTime) { timeInterval = newTime; }
    void setObjectInt(int newInt) { objectInterval = newInt; }
    void setDifficulty(diffSetting diff) {difficulty = diff; }
    void setScore(int newScore) { score = newScore; }
    void setSlowTimer(int newVal) { slowTimer = newVal; }
    void setInvulTimer(int newVal) { invulTimer = newVal; }
    void setMultiTimer(int newVal) { multiTimer = newVal; }
    void setUsername(string newUsername) { username = newUsername; }
    void setCheatMode(bool cheat) { cheatMode = cheat; }

    void addBasic(Object *obj)     { basics.push_back(obj); }
    void addSmall(Object *obj)     { smalls.push_back(obj); }
    void addExplosive(Object *obj) { explosives.push_back(obj); }
    void addPowerup(Object *obj)   { powerups.push_back(obj); }


    void incScore(int incAmt) { score += incAmt; }
    // moves player to new location
    void movePlayer(int newX, int newY) { player->move(newX, newY); }
    // ends the game and displays the high scores if the player runs out of lives
    void quit();
    // resets the game instance variables to the default values
    void reset();
    // erases every object in every object vector
    void clearObjVectors();
    // saves the current state of the game including score, number of lives,
    // and locations of all falling objects and the character itself.
    bool save(string fileName);
    // resumes the saved game at the point that it was saved.
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
    //Returns: the private instance of the game class
    static Game& getInstance() { return instance; }
    //Getter methods
    int getInterval() { return timeInterval; }
};
#endif // WORLD_H
