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
};

#endif // DATABASE_H
