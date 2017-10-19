#ifndef TEAM_H
#define TEAM_H

#include <QString>

class Team
{
private:
    QString name; /**< Team name */
    QString stadiumName; /**< Stadium name */
    QString seatingCapacity; /**< Stadium seating capacity*/
    QString location; /**< Stadium location */
    QString conference; /**< Team conference */
    QString surfaceType; /**< Stadium surface type */
    QString stadiumRoofType; /**< Stadium roof type */
    QString starPlayer; /**< Team star player */

public:
    /**
     * @brief Default constructor.
     */
    Team();

    /*****************************************************
     * MUTATOR FUNCTIONS - Set the values of the private
     * data members of the Team class.
     *****************************************************/

    /**
     * @brief setName sets the team's name.
     * @param tName - Team's name.
     */
    void setName(QString tName);

    /**
     * @brief setStadiumName sets the stadium's name.
     * @param tStadiumName - Stadium's name.
     */
    void setStadiumName(QString tStadiumName);

    /**
     * @brief setSeatingCapacity sets the stadium's seating capacity.
     * @param tSeatingCapacity - Stadium's seating capacity.
     */
    void setSeatingCapacity(QString tSeatingCapacity);

    /**
     * @brief setLocation sets the stadium's location.
     * @param tLocation - Stadium's location.
     */
    void setLocation(QString tLocation);

    /**
     * @brief setConference sets the team's conference.
     * @param tConference - Team's conference.
     */
    void setConference(QString tConference);

    /**
     * @brief setSurfaceType sets the stadium's surface type.
     * @param tSurfaceType - Stadium's surface type.
     */
    void setSurfaceType(QString tSurfaceType);

    /**
     * @brief setStadiumRoofType sets the stadium's roof type.
     * @param tStadiumRoofType - Stadium's roof type.
     */
    void setStadiumRoofType(QString tStadiumRoofType);

    /**
     * @brief setStarPlayer sets the team's star player.
     * @param tStarPlayer - Team's star player.
     */
    void setStarPlayer(QString tStarPlayer);

    /*****************************************************
     * ACCESSOR FUNCTIONS - Return the values of the
     * private data members of the Team class.
     *****************************************************/

    /**
     * @brief getName returns the team's name.
     * @return name
     */
    QString getName();

    /**
     * @brief getStadiumName returns the stadium's name.
     * @return stadiumName
     */
    QString getStadiumName();

    /**
     * @brief getSeatingCapacity returns the stadium's seating capacity.
     * @return seatingCapacity
     */
    QString getSeatingCapacity();

    /**
     * @brief getLocation returns the stadium's location.
     * @return location
     */
    QString getLocation();

    /**
     * @brief getConference returns the team's conference.
     * @return conference
     */
    QString getConference();

    /**
     * @brief getSurfaceType returns the stadium's surface type.
     * @return surfaceType
     */
    QString getSurfaceType();

    /**
     * @brief getStadiumRoofType returns the stadium's roof type.
     * @return stadiumRoofType
     */
    QString getStadiumRoofType();

    /**
     * @brief getStarPlayer returns the team's star player.
     * @return starPlayer
     */
    QString getStarPlayer();
};

#endif // TEAM_H
