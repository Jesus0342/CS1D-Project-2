#include "database.h"

Database::Database() : QSqlDatabase(addDatabase("QSQLITE"))
{
    this->setDatabaseName("./nfl.db");

    QFileInfo databaseName("./nfl.db");

    if(!databaseName.exists())
    {
        qDebug() << "The database does not exist.";
    }

    this->open();
}

Database* Database::getInstance()
{
    if(instance == nullptr)
    {
        instance = new Database;
    }

    return instance;
}

QVector<Team> Database::returnTeamList()
{
    QVector<Team> teams;

    Team temp;

    QSqlQuery query("SELECT * FROM NFL_INFORMATION");

    int nameId = query.record().indexOf("TeamName");
    int stadiumNameId = query.record().indexOf("StadiumName");
    int seatingCapacityId = query.record().indexOf("SeatingCapacity");
    int locationId = query.record().indexOf("Location");
    int conferenceId = query.record().indexOf("Conference");
    int surfaceTypeId = query.record().indexOf("SurfaceType");
    int stadiumRoofTypeId = query.record().indexOf("StadiumRoofType");
    int starPlayerId = query.record().indexOf("StarPlayer");

    qDebug() << "Seating Capacity: " << seatingCapacityId;
    qDebug() << "Location ID: " << locationId;

    while(query.next())
    {
        temp.setName(query.value(nameId).toString());
        temp.setStadiumName(query.value(stadiumNameId).toString());
        temp.setSeatingCapacity(query.value(seatingCapacityId).toString());
        temp.setLocation(query.value(locationId).toString());
        temp.setConference(query.value(conferenceId).toString());
        temp.setSurfaceType(query.value(surfaceTypeId).toString());
        temp.setStadiumRoofType(query.value(stadiumRoofTypeId).toString());
        temp.setStarPlayer(query.value(starPlayerId).toString());

        qDebug() << temp.getLocation();

        teams.append(temp);
    }

    return teams;
}
