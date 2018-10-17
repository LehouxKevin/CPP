#include "testalveoleslibres.h"
#include "ui_testalveoleslibres.h"
#include <QDebug>

TestAlveolesLibres::TestAlveolesLibres(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestAlveolesLibres)
{
    ui->setupUi(this);
    ui->pushButtonLiberer->setDisabled(true);
    alveoles = new AlveolesLibres(4,5);

    for(const int & entier : *alveoles)
    {
         ui->listWidgetNumero->addItem(QString :: number(entier));
    }
    /*connect(ui->pushButtonLiberer,&QPushButton::clicked,this,&AlveolesLibres::);
    connect(ui->pushButtonReserver,&QPushButton::clicked,this,&TestAlveolesLibres::on_pushButtonReserver_clicked);*/
}

TestAlveolesLibres::~TestAlveolesLibres()
{
    delete ui;
}//numeroAlveole/20+1

void TestAlveolesLibres::on_pushButtonReserver_clicked()
{
    int numeroAlveole = 21-alveoles->back();
    qDebug()<<numeroAlveole;

    int numeroRangee=numeroAlveole/5+1;
    int numeroColonne=numeroAlveole-5*(numeroRangee-1);

    if(numeroAlveole>0)
    {
        ui->pushButtonLiberer->setDisabled(false);
    }

    if(numeroAlveole<20)
    {
        bool retVal = alveoles->Reserver(numeroRangee,numeroColonne);

        ui->listWidgetRangeeColonne->addItem(QString :: number(numeroAlveole));;
    }
    else {
        ui->listWidgetNumero->setDisabled(true);
        ui->pushButtonReserver->setDisabled(true);

    }


}

void TestAlveolesLibres::on_pushButtonLiberer_clicked()
{
    int numeroAlveole = ui->listWidgetRangeeColonne->currentItem()->text().toInt();
    int numeroRangee=numeroAlveole/5+1;
    int numeroColonne=numeroAlveole-5*(numeroRangee-1);

    bool retVal = alveoles->Liberer(numeroRangee,numeroColonne);
}
