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

void Souvenir::setTeamName(QString sTeamName)
{
    teamName = sTeamName;
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

QString Souvenir::getTeamName()
{
    return teamName;
}

double Souvenir::getPrice()
{
    return price;
}
