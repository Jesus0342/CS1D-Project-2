#ifndef UNSORTEDMAP_H
#define UNSORTEDMAP_H

#include <QVector>

#include "team.h"

/**
 * @brief UnsortedMap Class
 *
 * This class provides a means of storing the NFL Information into an
 * unsorted map that uses a QVector as the underlying data structure.
 */
class UnsortedMap
{
private:
    QVector<Team> map; /**< Vector of team objects */

public:
    /**
     * @brief Default constructor.
     */
    UnsortedMap();

    /**
     * @brief size returns the number of elements in the map.
     * @return map.size()
     */
    int size();

    /**
     * @brief empty returns true if the map is empty, else returns false.
     * @return map.empty()
     */
    bool empty();

    /**
     * @brief find returns an iterator to the entry with the specified key.
     * @param key - key to be searched for.
     * @return searchIt
     */
    QVector<Team>::iterator find(QString key);

    /**
     * @brief insert adds a new entry to the map.
     *
     * @param key - key to be searched for.
     * @param value - new entry.
     * @return foundIt
     */
    QVector<Team>::iterator insert(QString key, Team value);

    /**
     * @brief operator [] allows acess to the specified index of the map.
     * @param index - index of the map to be accessed.
     * @return map.at(index)
     */
    Team operator[](const int index);

    /**
     * @brief begin returns an iterator to the beginning of the map
     * @return map.begin()
     */
    QVector<Team>::iterator begin();

    /**
     * @brief end returns an iterator to the position after the end of the map.
     * @return map.end()
     */
    QVector<Team>::iterator end();
};

#endif // MAP_H
