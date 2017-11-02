#include "souvenir.h"

Souvenir::Souvenir()
{
}

/*********************
 * MUTATOR FUNCTIONS *
 *********************/
void Souvenir::setName(QString sName)
{
    name = sName;
}

void Souvenir::setStadiumName(QString sStadiumName)
{
    stadiumName = sStadiumName;
}

void Souvenir::setPrice(double sPrice)
{
    price = sPrice;
}

/**********************
 * ACCESSOR FUNCTIONS *
 **********************/
QString Souvenir::getName()
{
    return name;
}

QString Souvenir::getStadiumName()
{
    return stadiumName;
}

double Souvenir::getPrice()
{
    return price;
}
