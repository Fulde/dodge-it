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
    //Set up the ui for the widget
    ui->setupUi(this);
    main = dynamic_cast<Widget*>(parent);
}

//Destructor for Widget
WidgetStart::~WidgetStart()
{
    delete ui;
}

void WidgetStart::on_btnStart_clicked()
{
    if (ui->rbEasy->isChecked()) {
        Game::getInstance().setDifficulty(Game::easy);
        Game::getInstance().setTimeInt(700);
    } else if (ui->rbMedium->isChecked()) {
        Game::getInstance().setDifficulty(Game::medium);
        Game::getInstance().setTimeInt(500);
    } else if (ui->rbHard->isChecked()) {
        Game::getInstance().setDifficulty(Game::hard);
        Game::getInstance().setTimeInt(300);
    }

    WidgetGame* game = new WidgetGame(main);
    game->show();
    this->hide();
}

void WidgetStart::on_btnHelp_clicked()
{
    WidgetHelp* help = new WidgetHelp(this);
    help->show();
}
