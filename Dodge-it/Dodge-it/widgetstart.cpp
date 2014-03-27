//==============================
//  CpS111 - Team 3 - Dodge-It
//
//      WIDGETSTART.CPP
//==============================

#include "widgetstart.h"
#include "ui_widgetstart.h"
#include "widgetgame.h"
#include "widgethelp.h"
#include "widget.h"
#include "game.h"

//Instantiates the Widget
WidgetStart::WidgetStart(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetStart)
{
    ui->setupUi(this);
    main = dynamic_cast<Widget*>(parent);
}

WidgetStart::~WidgetStart() { delete ui; }

void WidgetStart::on_btnStart_clicked()
{
    if (ui->rbEasy->isChecked()) {
        Game::getInstance().setDifficulty(Game::easy);
        Game::getInstance().setObjectInt(30);
    } else if (ui->rbMedium->isChecked()) {
        Game::getInstance().setDifficulty(Game::medium);
        Game::getInstance().setObjectInt(20);
    } else if (ui->rbHard->isChecked()) {
        Game::getInstance().setDifficulty(Game::hard);
        Game::getInstance().setObjectInt(10);
    }
    Game::getInstance().setTimeInt(9);

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
    WidgetHelp* help = new WidgetHelp;
    help->show();
}

void WidgetStart::on_btnQuit_clicked()
{
    // write current highscore vector to file
    HighScore::scoresToFile("highScores.txt");

    //quit the application
    QCoreApplication::exit();
}

void WidgetStart::on_btnLoad_clicked()
{
    WidgetGame* game = new WidgetGame(main);
    game->show();
    this->hide();

    game->WidgetGame::loadGame("savedGame.txt");
}
