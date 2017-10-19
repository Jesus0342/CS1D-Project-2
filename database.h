#ifndef DATABASE_H
#define DATABASE_H

#include <QVector>
#include <QFileInfo>
#include <QStandardItemModel>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlRecord>
#include <QDebug>

#include "team.h"

class Database : public QSqlDatabase
{
private:
    static Database* instance;

    Database();

public:
    static Database* getInstance();

    static QVector<Team> returnTeamList();
};

#endif // DATABASE_H
