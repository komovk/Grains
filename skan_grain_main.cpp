#include "skan_grain_main.h"
#include "ui_skan_grain_main.h"

skan_grain_main::skan_grain_main(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::skan_grain_main)
{
    ui->setupUi(this);
}

skan_grain_main::~skan_grain_main()
{
    delete ui;
}
