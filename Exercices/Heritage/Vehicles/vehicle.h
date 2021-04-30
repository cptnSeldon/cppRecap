#pragma once

#include <string>
#include <iostream>

using namespace std;

static int CURRENT_YEAR = 2021;
static int MIN_YEAR = 1886;

/**
 * @brief Vehicle abstract class
 *
 */
class Vehicle
{
    protected:
        string brand = "generic brand";
        int km = 0;
        double price = 0.;
        int productionDate = CURRENT_YEAR;

    public:
        /**
         * @brief Construct a new Vehicle object -> default, usable only by child classes
         *
         */
        Vehicle() = default;

        /**
         * @brief Construct a new Vehicle object -> parameterized, usable only by child classes
         *
         * @param _brand
         * @param _km
         * @param _price
         * @param _productionDate
         */
        Vehicle(string _brand, int _km, double _price, int _productionDate);

        /**
         * @brief Destroy the Vehicle object
         *
         */
        virtual ~Vehicle() = default; //{ cout << "Vehicle " << this->brand << " will be destroyed." << endl; }

        /**
         * @brief Show Vehicle specs, overriden in child classes, usable only by child classes
         *
         */
        virtual void show() const;

        /**
         * @brief Estimate Vehicle price, usable only by child classes, pure virtual function
         *
         * @return double
         */
        virtual double estimate() const = 0;
};