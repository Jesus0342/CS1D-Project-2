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
    int teamNameId = query.record().indexOf("TeamName");
    int priceId = query.record().indexOf("Price");

    // Adds the souvenirs to the QVector while there are still souvenirs in the database.
    while(query.next())
    {
        temp.setName(query.value(nameId).toString());
        temp.setTeamName(query.value(teamNameId).toString());
        temp.setPrice(query.value(priceId).toDouble());

        souvenirs.append(temp);
    }

    return souvenirs;
}

QVector<Souvenir> Database::returnSouvenirList(Team stadium)
{
    QVector<Souvenir> souvenirs;

    Souvenir temp;

    // Query to select all information from NFL_SOUVENIRS database table.
    QSqlQuery query("SELECT * FROM NFL_SOUVENIRS");

    // Gets the index of the specified record from the table.
    int nameId = query.record().indexOf("SouvenirName");
    int teamNameId = query.record().indexOf("TeamName");
    int priceId = query.record().indexOf("Price");

    // Adds the souvenirs to the QVector while there are still souvenirs in the database.
    while(query.next())
    {
        if(query.value(teamNameId).toString() == stadium.getName())
        {
            temp.setName(query.value(nameId).toString());
            temp.setTeamName(query.value(teamNameId).toString());
            temp.setPrice(query.value(priceId).toDouble());

            souvenirs.append(temp);
        }
    }

    return souvenirs;
}

QVector<Team> Database::returnNewStadiums()
{
    // QVector of new stadiums.
    QVector<Team> newStadiums;

    // Team object used to add teams in database to the vector.
    Team temp;

    // Query to select all information from NFL_INFORMATION database table.
    QSqlQuery query("SELECT * FROM NEW_STADIUMS");

    // Gets the index of the specified record from the table.
    int nameId = query.record().indexOf("TeamName");
    int stadiumNameId = query.record().indexOf("StadiumName");
    int seatingCapacityId = query.record().indexOf("SeatingCapacity");
    int locationId = query.record().indexOf("Location");
    int conferenceId = query.record().indexOf("Conference");
    int surfaceTypeId = query.record().indexOf("SurfaceType");
    int stadiumRoofTypeId = query.record().indexOf("StadiumRoofType");
    int starPlayerId = query.record().indexOf("StarPlayer");

    // Inserts the teams into the QVector while there are still
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

        newStadiums.append(temp);
    }

    return newStadiums;
}

QVector<Souvenir> Database::returnNewSouvenirs()
{
    // QVector of new souvenirs.
    QVector<Souvenir> newSouvenirs;

    // Temp object used to add souvenirs in the database to the QVector.
    Souvenir temp;

    // Query to select all information from NFL_SOUVENIRS database table.
    QSqlQuery query("SELECT * FROM NEW_SOUVENIRS");

    // Gets the index of the specified record from the table.
    int nameId = query.record().indexOf("SouvenirName");
    int teamNameId = query.record().indexOf("TeamName");
    int priceId = query.record().indexOf("Price");

    // Adds the souvenirs to the QVector while there are still souvenirs in the database.
    while(query.next())
    {
        temp.setName(query.value(nameId).toString());
        temp.setTeamName(query.value(teamNameId).toString());
        temp.setPrice(query.value(priceId).toDouble());

        newSouvenirs.append(temp);
    }

    return newSouvenirs;
}

bool Database::stadiumExists(Team stadium)
{
    QSqlQuery query;

    // Gets the name of the stadium.
    QString stadiumName = stadium.getStadiumName();

    query.prepare("SELECT Distinct StadiumName FROM NFL_INFORMATION WHERE UPPER(StadiumName) = UPPER(:stadiumName)");

    query.bindValue(":stadiumName", stadiumName);

    query.exec();

    // Returns true if the stadium exists in the database.
    if(query.next())
    {
        return true;
    }

    return false;
}

bool Database::souvenirExists(Souvenir souvenir)
{
    QSqlQuery query;

    // Gets the name of the souvenir and its corresponding stadium.
    QString souvenirName = souvenir.getName();
    QString team = souvenir.getTeamName();

    query.prepare("SELECT Distinct SouvenirName FROM NFL_SOUVENIRS WHERE UPPER(SouvenirName) = UPPER(:souvenirName) and UPPER(TeamName) = UPPER(:teamName)");

    query.bindValue(":souvenirName", souvenirName);
    query.bindValue(":teamName", team);

    query.exec();

    // Returns true if the stadium exists in the database.
    if(query.next())
    {
        return true;
    }

    return false;
}

void Database::addStadium(Team stadium)
{
    // Adds the stadium if it does not already exist.
    if(!stadiumExists(stadium))
    {
        QSqlQuery query;

        // Gets the information for the new stadium.
        QString teamName = stadium.getName();
        QString stadiumName = stadium.getStadiumName();
        QString seatingCapacity = stadium.getSeatingCapacity();
        QString location = stadium.getLocation();
        QString conference = stadium.getConference();
        QString surfaceType = stadium.getSurfaceType();
        QString roofType = stadium.getStadiumRoofType();
        QString starPlayer = stadium.getStarPlayer();

        // Specifies the table and columns where the information will be placed.
        query.prepare("INSERT INTO NFL_INFORMATION(TeamName, StadiumName, SeatingCapacity, Location, Conference, SurfaceType, StadiumRoofType, StarPlayer)\n"
                      "VALUES(:teamName, :stadiumName, :seatingCapacity, :location, :conference, :surfaceType, :roofType, :starPlayer);");

        // Binds the values.
        query.bindValue(":teamName", teamName);
        query.bindValue(":stadiumName", stadiumName);
        query.bindValue(":seatingCapacity", seatingCapacity);
        query.bindValue(":location", location);
        query.bindValue(":conference", conference);
        query.bindValue(":surfaceType", surfaceType);
        query.bindValue(":roofType", roofType);
        query.bindValue(":starPlayer", starPlayer);

        // Adds the stadium to the database.
        query.exec();
    }
}

void Database::addSouvenir(Souvenir souvenir)
{
    // Adds the souvenir if it does not already exist.
    if(!souvenirExists(souvenir))
    {
        QSqlQuery query;

        // Gets the information for the new souvenir.
        QString souvenirName = souvenir.getName();
        QString teamName = souvenir.getTeamName();
        double price = souvenir.getPrice();

        // Specifies the table and columns where the information will be placed.
        query.prepare("INSERT INTO NFL_SOUVENIRS(SouvenirName, TeamName, Price)\n"
                      "VALUES(:souvenirName, :teamName, :price);");

        // Binds the values.
        query.bindValue(":souvenirName", souvenirName);
        query.bindValue(":teamName", teamName);
        query.bindValue(":price", price);

        // Adds the souvenir to the database.
        query.exec();
    }
}

void Database::removeStadium(Team stadium)
{
    // Removes stadium if it exists.
    if(stadiumExists(stadium))
    {
        QString stadiumName = stadium.getStadiumName();

        QSqlQuery query;

        query.prepare("DELETE FROM NFL_INFORMATION WHERE StadiumName = :stadiumName");

        query.bindValue(":stadiumName", stadiumName);

        query.exec();
    }
}

void Database::removeSouvenir(Souvenir souvenir)
{
    // Removes souvenir if it exists.
    if(souvenirExists(souvenir))
    {
        QString souvenirName = souvenir.getName();
        QString teamName = souvenir.getTeamName();

        QSqlQuery query;

        query.prepare("DELETE FROM NFL_SOUVENIRS WHERE SouvenirName = :souvenirName and TeamName = :teamName");

        query.bindValue(":souvenirName", souvenirName);
        query.bindValue(":teamName", teamName);

        query.exec();
    }
}

void Database::editSouvenirPrice(Souvenir souvenir, double newPrice)
{
    // Changes the price of the souvenir if it exists.
    if(souvenirExists(souvenir))
    {
        QString souvenirName = souvenir.getName();
        QString teamName = souvenir.getTeamName();

        QSqlQuery query;

        query.prepare("UPDATE NFL_SOUVENIRS SET Price = :price WHERE SouvenirName = :souvenirName AND TeamName = :teamName");

        query.bindValue(":price", newPrice);
        query.bindValue(":souvenirName", souvenirName);
        query.bindValue(":teamName", teamName);

        query.exec();
    }
}

void Database::editStadium(QString team, QString field, QString newValue)
{
    QSqlQuery query;

    query.prepare("UPDATE NFL_INFORMATION SET " + field + " = :newValue WHERE TeamName = :team");

//    if (field == "SeatingCapacity")
//    {
//        int seatingCapacityInt =newValue.toInt();
//        query.bindValue(":newValue",seatingCapacityInt);
//    }
//    else
        query.bindValue(":newValue", newValue);
        query.bindValue(":team", team);

    query.exec();
}
