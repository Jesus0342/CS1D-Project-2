#include "team.h"

Team::Team()
{
}

/*********************
 * MUTATOR FUNCTIONS *
 *********************/
void Team::setName(QString tName)
{
    name = tName;
}

void Team::setStadiumName(QString tStadiumName)
{
    stadiumName = tStadiumName;
}

void Team::setSeatingCapacity(QString tSeatingCapacity)
{
    seatingCapacity = tSeatingCapacity;
}

void Team::setLocation(QString tLocation)
{
    location = tLocation;
}

void Team::setConference(QString tConference)
{
    conference = tConference;
}

void Team::setSurfaceType(QString tSurfaceType)
{
    surfaceType = tSurfaceType;
}

void Team::setStadiumRoofType(QString tStadiumRoofType)
{
    stadiumRoofType = tStadiumRoofType;
}

void Team::setStarPlayer(QString tStarPlayer)
{
    starPlayer = tStarPlayer;
}

/**********************
 * ACCESSOR FUNCTIONS *
 **********************/
QString Team::getName()
{
    return name;
}

QString Team::getStadiumName()
{
    return stadiumName;
}

QString Team::getSeatingCapacity()
{
    return seatingCapacity;
}

QString Team::getLocation()
{
    return location;
}

QString Team::getConference()
{
    return conference;
}

QString Team::getSurfaceType()
{
    return surfaceType;
}

QString Team::getStadiumRoofType()
{
    return stadiumRoofType;
}

QString Team::getStarPlayer()
{
    return starPlayer;
}
