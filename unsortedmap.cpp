#include "unsortedmap.h"

UnsortedMap::UnsortedMap()
{

}

int UnsortedMap::size()
{
    return map.size();
}

bool UnsortedMap::empty()
{
    return map.empty();
}

QVector<Team>::iterator UnsortedMap::find(QString key)
{
    // Creates an iterator to traverse the map.
    QVector<Team>::iterator searchIt = map.begin();

    // Boolean variable used to determine whether the
    // key already exists in the map.
    bool found = false;

    // Traverses the map until the key is found or the
    // end of the map is reached.
    while(searchIt != map.end() && !found)
    {
        if(searchIt->getName() == key)
        {
            found = true;
        }
        else
        {
            searchIt++;
        }
    }

    return searchIt;
}

QVector<Team>::iterator UnsortedMap::insert(QString key, Team value)
{
    // Creates an iterator and immediately calls find() to determine
    // whether or not a value with the same key already exists.
    QVector<Team>::iterator foundIt = find(key);

    // If there is no value with the specified key, the value is added
    // to the end of the map, else the value with the same key is
    // replaced with the new value.
    if(foundIt == map.end())
    {
        map.push_back(value);

        foundIt--;
    }
    else
    {
        *foundIt = value;
    }

    return foundIt;
}

Team UnsortedMap::operator[](int index)
{
    return map.at(index);
}

QVector<Team>::iterator UnsortedMap::begin()
{
    return map.begin();
}

QVector<Team>::iterator UnsortedMap::end()
{
    return map.end();
}

long UnsortedMap::calculateTotalSeatingCapacity()
{
    // Total seating capacity accumulator.
    long totalSeatingCapacity = 0;

    // Iterator to traverse the map.
    QVector<Team>::iterator teamIt = begin();

    // Iterator to check if the current stadium's seating capacity has
    // already been added to the total seating capacity.
    QVector<Team>::iterator compIt;

    // Traverses the entire map to accumulate totalSeatingCapacity.
    while(teamIt != end())
    {
        // Resets compIt to the beginning of the map.
        compIt = begin();

        // Determines whether or not the stadium's seating capacity has already
        // been counted.
        bool alreadyCounted = false;

        // Traverses the list up until teamIt to check if any of the teams before
        // teamIt play in the same stadium.
        while(compIt < teamIt && !alreadyCounted)
        {
            // Sets alreadyCounted to true if a previous team plays at the same
            // stadium as the current team.
            if(compIt->getStadiumName() == teamIt->getStadiumName())
            {
                alreadyCounted = true;
            }

            // Moves compIt to the next team.
            compIt++;
        }

        // Accumulates totalSeatingCapacity if the current team does not play
        // at the same stadium as a previous team.
        if(!alreadyCounted)
        {
            // Converts the current stadium's seating capacity to a long.
            long currentSeatingCapacity = teamIt->getSeatingCapacity().replace(",", "").toLong();

            // Accumulates the seating capacity.
            totalSeatingCapacity += currentSeatingCapacity;
        }

        // Moves teamIt to the next team in the map.
        teamIt++;
    }

    return totalSeatingCapacity;
}
