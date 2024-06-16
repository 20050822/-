#ifndef SETROOMINFORMATION_H
#define SETROOMINFORMATION_H

#include <QWidget>

namespace Ui {
class SetRoomInformation;
}

class SetRoomInformation : public QWidget
{
    Q_OBJECT

public:
    explicit SetRoomInformation(QWidget *parent = nullptr);
    ~SetRoomInformation();

private:
    Ui::SetRoomInformation *ui;
};

#endif // SETROOMINFORMATION_H
