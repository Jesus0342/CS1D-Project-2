#include "database.h"

Database::Database() : QSqlDatabase(addDatabase("QSQLITE"))
{
    // Sets the name of the database file.
    this->setDatabaseName("./nfl.db");

    // QFileInfo variable initialized with the name of the database.
    QFileInfo databaseName("./nfl.db");

    // Displays error message if the database does not exist, else opens the
    // database.
    if(!databaseName.exists())
    {
        QMessageBox::critical(NULL, "Error", "The database does not exist!");
    }
    else
    {
        this->open();
    }
}

Database* Database::getInstance()
{
    // Creates a single instance of the database if it does not
    // exist yet.
    if(instance == nullptr)
    {
        instance = new Database;
    }

    return instance;
}

UnsortedMap Database::returnTeamList()
{
    // Unsorted map of teams.
    UnsortedMap teams;

    // Team object used to add teams in database to unsorted map.
    Team temp;

    // Query to select all information from NFL_INFORMATION database table.
    QSqlQuery query("SELECT * FROM NFL_INFORMATION");

    // Gets the index of the specified record from the table.
    int nameId = query.record().indexOf("TeamName");
    int stadiumNameId = query.record().indexOf("StadiumName");
    int seatingCapacityId = query.record().indexOf("SeatingCapacity");
    int locationId = query.record().indexOf("Location");
    int conferenceId = query.record().indexOf("Conference");
    int surfaceTypeId = query.record().indexOf("SurfaceType");
    int stadiumRoofTypeId = query.record().indexOf("StadiumRoofType");
    int starPlayerId = query.record().indexOf("StarPlayer");

    // Inserts the teams into the unsorted map while there are still
    // teams in the database.
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

        teams.insert(temp.getName(), temp);
    }

    return teams;
}

QVector<Souvenir> Database::returnSouvenirList()
{
    // QVector of souvenirs.
    QVector<Souvenir> souvenirs;

    // Temp object used to add souvenirs in the database to the QVector.
    Souvenir temp;

    // Query to select all information from NFL_SOUVENIRS database table.
    QSqlQuery query("SELECT * FROM NFL_SOUVENIRS");

    // Gets the index of the specified record from the table.
    int nameId = query.record().indexOf("SouvenirName");
    int stadiumNameId = query.record().indexOf("StadiumName");
    int priceId = query.record().indexOf("Price");

    // Adds the souvenirs to the QVector while there are still souvenirs in the database.
    while(query.next())
    {
        temp.setName(query.value(nameId).toString());
        temp.setStadiumName(query.value(stadiumNameId).toString());
        temp.setPrice(query.value(priceId).toDouble());

        souvenirs.append(temp);
    }

    return souvenirs;
}
