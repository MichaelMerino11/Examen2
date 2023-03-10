#include "juego.h"
#include "ui_juego.h"

#include <QPainter>
#include <QFileDialog>

Juego::Juego(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Juego)
{
    m_circulo = new Circulo;
    ui->setupUi(this);
    miImagen = new QImage(this->size(),QImage::Format_ARGB32_Premultiplied);
    miImagen->fill(Qt::white);
    mPainter = new QPainter(miImagen);
    mPainter->setRenderHint(QPainter::Antialiasing);

    dibujar();
}

Juego::~Juego()
{
    delete ui;
    delete mPainter;
    delete miImagen;
}

void Juego::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    // Dibujar la imagen
    painter.drawImage(0, 0, *miImagen);
}


void Juego::on_btnArriba_released()
{
    miImagen->fill(Qt::white);
    m_circulo->setAncho(m_circulo->getAncho()-1);
    dibujar();
}


void Juego::on_btnAbajo_released()
{
    miImagen->fill(Qt::white);
    m_circulo->setAncho(m_circulo->getAncho()+1);
    dibujar();
}


void Juego::on_btnIzqueirda_released()
{
    miImagen->fill(Qt::white);
    m_circulo->setAnchx(m_circulo->getAnchx()-1);
    dibujar();
}


void Juego::on_btnDerecha_released()
{
    miImagen->fill(Qt::white);
    m_circulo->setAnchx(m_circulo->getAnchx()+1);
    dibujar();
}


void Juego::on_actionConfigraci0n_triggered()
{
    Configuracion *config = new Configuracion(this);
    int respuesta = config->exec();
    if (respuesta){
        qDebug() << config->color().name();
        qDebug() << config->dimension();
    }
}


void Juego::on_actionSalir_triggered()
{
    this->close();
}

void Juego::dibujar()
{

    QPen pincel;
    pincel.setWidth(5);
    pincel.setColor(Qt::black);
    pincel.setJoinStyle(Qt::MiterJoin);

    pincel.setColor(Qt::black);
    pincel.setWidth(3);
    // Dibujar una linea
    mPainter->setPen(pincel);
    mPainter->drawEllipse(m_circulo->getAnchx(), m_circulo->getAncho(), m_circulo->getTalla(), m_circulo->getTalla());
    update();
}

void Juego::on_marco_customContextMenuRequested(QPoint const&){

}
