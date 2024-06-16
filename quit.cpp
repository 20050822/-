#include "quit.h"
#include "ui_quit.h"

Quit::Quit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Quit)
{
    ui->setupUi(this);
}

Quit::~Quit()
{
    delete ui;
}
