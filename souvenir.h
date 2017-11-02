#ifndef SOUVENIR_H
#define SOUVENIR_H

#include <QString>

class Souvenir
{
private:
    QString name; /**< Souvenir name */
    QString stadiumName; /**< Stadium name */
    double price; /**< Souvenir price */

public:
    /**
     * @brief Default constructor.
     */
    Souvenir();

    /*****************************************************
     * MUTATOR FUNCTIONS - Set the values of the private
     * data members of the Souvenir class.
     *****************************************************/

    /**
     * @brief setName sets the souvenirs's name.
     * @param sName - Souvenir's name.
     */
    void setName(QString sName);

    /**
     * @brief setStadiumName sets the stadium's name.
     * @param sStadiumName - Stadium's name.
     */
    void setStadiumName(QString sStadiumName);

    /**
     * @brief setPrice sets the souvenir's price.
     * @param sPrice - Souvenir's price.
     */
    void setPrice(double sPrice);

    /*****************************************************
     * ACCESSOR FUNCTIONS - Return the values of the
     * private data members of the Team class.
     *****************************************************/

    /**
     * @brief getName returns the souvenir's name.
     * @return name
     */
    QString getName();

    /**
     * @brief getStadiumName returns the stadium's name.
     * @return stadiumName
     */
    QString getStadiumName();

    /**
     * @brief getPrice return's the souvenir's price.
     * @return price
     */
    double getPrice();
};

#endif // SOUVENIR_H
