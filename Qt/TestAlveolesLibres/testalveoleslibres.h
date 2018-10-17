#ifndef TESTALVEOLESLIBRES_H
#define TESTALVEOLESLIBRES_H

#include <QWidget>
#include <QTcpSocket>
#include <QDataStream>
#include <QDialog>
#include <QtNetwork>
#include <QScriptEngine>
#include "alveoleslibres.h"

namespace Ui {
class TestAlveolesLibres;
}

class TestAlveolesLibres : public QWidget
{
    Q_OBJECT

public:
    explicit TestAlveolesLibres(QWidget *parent = nullptr);
    ~TestAlveolesLibres();


private slots:
    void on_pushButtonReserver_clicked();

    void on_pushButtonLiberer_clicked();

private:
    Ui::TestAlveolesLibres *ui;
    AlveolesLibres *alveoles;
};

#endif // TESTALVEOLESLIBRES_H
