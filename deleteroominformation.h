#ifndef DELETEROOMINFORMATION_H
#define DELETEROOMINFORMATION_H

#include <QWidget>

namespace Ui {
class DeleteRoomInformation;
}

class DeleteRoomInformation : public QWidget
{
    Q_OBJECT

public:
    explicit DeleteRoomInformation(QWidget *parent = nullptr);
    ~DeleteRoomInformation();

private:
    Ui::DeleteRoomInformation *ui;
};

#endif // DELETEROOMINFORMATION_H
