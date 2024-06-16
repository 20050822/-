#include "displayroominformation.h"
#include "ui_displayroominformation.h"

DisplayRoomInformation::DisplayRoomInformation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DisplayRoomInformation)
{
    ui->setupUi(this);
}

DisplayRoomInformation::~DisplayRoomInformation()
{
    delete ui;
}
