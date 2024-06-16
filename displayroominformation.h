#ifndef DISPLAYROOMINFORMATION_H
#define DISPLAYROOMINFORMATION_H

#include <QWidget>

namespace Ui {
class DisplayRoomInformation;
}

class DisplayRoomInformation : public QWidget
{
    Q_OBJECT

public:
    explicit DisplayRoomInformation(QWidget *parent = nullptr);
    ~DisplayRoomInformation();

private:
    Ui::DisplayRoomInformation *ui;
};

#endif // DISPLAYROOMINFORMATION_H
