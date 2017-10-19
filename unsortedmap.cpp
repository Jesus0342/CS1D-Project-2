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
