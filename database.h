#ifndef DATABASE_H
#define DATABASE_H

#include <QFileInfo>
#include <QStandardItemModel>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlRecord>
#include <QDebug>
#include <QMessageBox>

#include "unsortedmap.h"
#include "souvenir.h"

/**
 * @brief Database Class
 *
 * This class provides access to the data stored in the SQL database.
 */
class Database : public QSqlDatabase
{
private:
    static Database* instance; /**< Static pointer to a single instance of the database. */

    /**
     * @brief Private Constructor.
     *
     * Opens the database.
     */
    Database();

public:
    /**
     * @brief getInstance returns a single instance of the database.
     * @return instance
     */
    static Database* getInstance();

    /**
     * @brief returnTeamList returns an unsorted map of the teams in the database.
     * @return teams
     */
    static UnsortedMap returnTeamList();

    /**
     * @brief returnSouvenirList returns a QVector of the souvenirs in the database.
     * @return souvenirs
     */
    static QVector<Souvenir> returnSouvenirList();

    /**
     * @brief returnSouvenirList returns the souvenirs for the specified stadium.
     * @param stadium - Stadium whose souvenir list will be returned.
     * @return souvenirs
     */
    static QVector<Souvenir> returnSouvenirList(Team stadium);

    /**
     * @brief returnNewStadiums returns a QVector of the stadiums in the new stadiums table of the database.
     * @return newStadiums
     */
    static QVector<Team> returnNewStadiums();

    /**
     * @brief returnNewSouvenirs returns a list of the souvenirs for the new stadiums.
     * @return newSouvenirs
     */
    static QVector<Souvenir> returnNewSouvenirs();

    /**
     * @brief stadiumExists returns true if the stadium already exists in the database.
     * @param stadium - Stadium to be checked.
     * @return True if stadium exists in the database, else false.
     */
    static bool stadiumExists(Team stadium);

    /**
     * @brief souvenirExists returns true if the souvenir at a stadium already exists in the database.
     * @param souvenir - Souvenir to be checked.
     * @return True if souvenir exists in the database, else false.
     */
    static bool souvenirExists(Souvenir souvenir);

    /**
     * @brief addStadium adds a new stadium to the database.
     * @param stadium - Stadium to be added (all data members must be defined).
     */
    static void addStadium(Team stadium);

    /**
     * @brief addSouvenir adds a new souvenir to the database.
     * @param souvenir - Souvenir to be added (all data members must be defined).
     */
    static void addSouvenir(Souvenir souvenir);

    static void removeStadium(Team stadium);

    static void removeSouvenir(Souvenir souvenir);
};

#endif // DATABASE_H
