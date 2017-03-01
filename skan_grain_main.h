#ifndef SKAN_GRAIN_MAIN_H
#define SKAN_GRAIN_MAIN_H

#include <QWidget>

namespace Ui {
class skan_grain_main;
}

class skan_grain_main : public QWidget
{
    Q_OBJECT

public:
    explicit skan_grain_main(QWidget *parent = 0);
    ~skan_grain_main();

private:
    Ui::skan_grain_main *ui;
};

#endif // SKAN_GRAIN_MAIN_H
