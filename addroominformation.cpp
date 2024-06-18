#include "addroominformation.h"
#include "ui_addroominformation.h"

AddRoomInformation::AddRoomInformation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddRoomInformation)
{
    ui->setupUi(this);

    //"客房种类"关联菜单
    ui->roomtype->setText("客房种类");
    QMenu* roomTypeMenu = new QMenu;
    QAction* standardRoom = roomTypeMenu->addAction("标间（单人房）");
    QAction* twinRoom = roomTypeMenu->addAction("双床房");
    QAction* largeBedRoom = roomTypeMenu->addAction("大床房");
    ui->roomtype->setMenu(roomTypeMenu);
    connect(standardRoom,&QAction::triggered,this,[=]{
        ui->roomtype->setText("标间(单人房)");
    });
    connect(twinRoom,&QAction::triggered,this,[=]{
       ui->roomtype->setText("双床房");
    });
    connect(largeBedRoom,&QAction::triggered,this,[=]{
       ui->roomtype->setText("大床房");
    });

    //"客房价格"关联菜单
    ui->roomprice->setText("客房价格");
    QMenu* roomPriceMenu = new QMenu;
    QAction* standardRoomPrice = roomPriceMenu->addAction("168元(标间)");
    QAction* twinRoomPrice = roomPriceMenu->addAction("250元(双床房)");
    QAction* largeBedRoomPrice = roomPriceMenu->addAction("300(大床房)");
    ui->roomprice->setMenu(roomPriceMenu);
    connect(standardRoomPrice,&QAction::triggered,this,[=]{
        ui->roomprice->setText("168元(标间)");
    });
    connect(twinRoomPrice,&QAction::triggered,this,[=]{
        ui->roomprice->setText("250元(双床房)");
    });
    connect(largeBedRoomPrice,&QAction::triggered,this,[=]{
        ui->roomprice->setText("300(大床房)");
    });

    //"客房床数量"关联菜单
    ui->bednum->setText("客房床数量");
    QMenu* bedNumMenu = new QMenu;
    QAction* standarBedNum = bedNumMenu->addAction("1(标准)");
    QAction* twinBedNum = bedNumMenu->addAction("2(标准)");
    QAction* largeBedNum = bedNumMenu->addAction("1(双人)");
    ui->bednum->setMenu(bedNumMenu);
    connect(standarBedNum,&QAction::triggered,this,[=]{
        ui->bednum->setText("1(标准)");
    });
    connect(twinBedNum,&QAction::triggered,this,[=]{
        ui->bednum->setText("2(标准)");
    });
    connect(largeBedNum,&QAction::triggered,this,[=]{
       ui->bednum->setText("1(双人)");
    });

    //"客房数量"关联菜单
    ui->roomnum->setText("客房数量");
    QMenu* roomNumMenu = new QMenu;
    QAction* one = roomNumMenu->addAction("1间");
    QAction* two = roomNumMenu->addAction("2间");
    QAction* three = roomNumMenu->addAction("3间");
    ui->roomnum->setMenu(roomNumMenu);
    connect(one,&QAction::triggered,this,[=]{
       ui->roomnum->setText("1间");
    });
    connect(two,&QAction::triggered,this,[=]{
       ui->roomnum ->setText("2间");
    });
    connect(three,&QAction::triggered,this,[=]{
       ui->roomnum->setText("3间");
    });

}

AddRoomInformation::~AddRoomInformation()
{
    delete ui;
};

