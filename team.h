#ifndef TEAM_H
#define TEAM_H

#include <QString>

class Team
{
private:
    QString name;
    QString stadiumName;
    QString seatingCapacity;
    QString location;
    QString conference;
    QString surfaceType;
    QString stadiumRoofType;
    QString starPlayer;

public:
    Team();

    void setName(QString tName);
    void setStadiumName(QString tStadiumName);
    void setSeatingCapacity(QString tSeatingCapacity);
    void setLocation(QString tLocation);
    void setConference(QString tConference);
    void setSurfaceType(QString tSurfaceType);
    void setStadiumRoofType(QString tStadiumRoofType);
    void setStarPlayer(QString tStarPlayer);

    QString getName();
    QString getStadiumName();
    QString getSeatingCapacity();
    QString getLocation();
    QString getConference();
    QString getSurfaceType();
    QString getStadiumRoofType();
    QString getStarPlayer();
};

#endif // TEAM_H
