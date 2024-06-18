#ifndef ADDROOMINFORMATION_H
#define ADDROOMINFORMATION_H

#include <QWidget>
#include<QMenu>
#include<QMenuBar>
#include<QAction>
#include<iostream>
#include<windows.h>

namespace Ui {
class AddRoomInformation;
}

class AddRoomInformation : public QWidget
{
    Q_OBJECT

public:
    explicit AddRoomInformation(QWidget *parent = nullptr);
    ~AddRoomInformation();

private:
    Ui::AddRoomInformation *ui;
};

#endif // ADDROOMINFORMATION_H
