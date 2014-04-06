//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETSTART.CPP
//==============================

#include "widgetstart.h"
#include "ui_widgetstart.h"
#include "widgetgame.h"
#include "widgethelp.h"
#include "widgetuser.h"
#include "ui_widgetuser.h"
#include "widget.h"
#include "game.h"

#include <QMessageBox>
#include <QSound>

//Instantiates the Widget
WidgetStart::WidgetStart(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetStart)
{
    ui->setupUi(this);
    main = dynamic_cast<Widget*>(parent);

    WidgetUser *userWin = new WidgetUser(this);
    userWin->show();
}

WidgetStart::~WidgetStart() { delete ui; }

void WidgetStart::on_btnStart_clicked()
{
    QSound::play("://198784__cman634__jump-sound-or-power-up-sound.wav");
    if (ui->rbEasy->isChecked()) {
        Game::getInstance().setDifficulty(Game::easy);
        Game::getInstance().setObjectInt(40);
    } else if (ui->rbMedium->isChecked()) {
        Game::getInstance().setDifficulty(Game::medium);
        Game::getInstance().setObjectInt(20);
    } else if (ui->rbHard->isChecked()) {
        Game::getInstance().setDifficulty(Game::hard);
        Game::getInstance().setObjectInt(10);
    }
    Game::getInstance().setTimeInt(9);
    Game::getInstance().setPlayerLives(3);
    Game::getInstance().setScore(0);

    Game::getInstance().setSlowTimer(0);
    Game::getInstance().setMultiTimer(0);
    Game::getInstance().setInvulTimer(0);

    WidgetGame* game = new WidgetGame(main);
    game->show();
    this->hide();

    Game::getInstance().setPlayerMovingUp(false);
    Game::getInstance().setPlayerMovingDown(false);
    Game::getInstance().setPlayerMovingLeft(false);
    Game::getInstance().setPlayerMovingRight(false);
}

void WidgetStart::on_btnHelp_clicked()
{
    QSound::play("://219069__annabloom__click1.wav");
    WidgetHelp* help = new WidgetHelp;
    help->show();
}

void WidgetStart::on_btnQuit_clicked()
{
    QSound::play("://219069__annabloom__click1.wav");

    // write current highscore vector to file
    HighScore::scoresToFile("highScores.txt");

    //quit the application
    QCoreApplication::exit();
}

void WidgetStart::on_btnLoad_clicked()
{
    QSound::play("://219069__annabloom__click1.wav");

    bool loadSuccess = Game::getInstance().load(Game::getInstance().getUsername() + ".txt");

    if (!loadSuccess)
    {
        QMessageBox::warning(this, "Dodge-it", "Saved game could not be loaded.\nIf this is your first time playing, please save a game before loading.");
        return;
    }

    WidgetGame* game = new WidgetGame(main);
    game->WidgetGame::loadGame();
    game->show();
    this->hide();
}
