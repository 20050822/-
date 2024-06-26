#ifndef SETSTATE_H
#define SETSTATE_H

#include <QDialog>

namespace Ui {
class setState;
}

class setState : public QDialog
{
    Q_OBJECT

public:
    explicit setState(QWidget *parent = nullptr);
    int getId();
    bool getstate();
    ~setState();

private:
    Ui::setState *ui;
};

#endif // SETSTATE_H
