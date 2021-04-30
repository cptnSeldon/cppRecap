#pragma once

#include "vehicle.h"
#include "fuelType.h"

/**
 * @brief Car class inheriting abstract class Vehicle
 *
 */
class Car : public Vehicle
{
    protected:
        FuelType fuelType = FuelType::Benzine;  //B, D, E
        int doors = 5;

    public:
        /**
         * @brief Construct a new Car object -> default
         *
         */
        Car() = default;

        /**
         * @brief Construct a new Car object -> parameterized
         *
         * @param _brand
         * @param _km
         * @param _price
         * @param _productionDate
         * @param _fuelType: Benzine, Diesel or Electric
         * @param _doors: 3 or 5
         */
        Car(string _brand, int _km, double _price, int _productionDate, FuelType _fuelType, int _doors);

        /**
         * @brief Destroy the Car object
         *
         */
        ~Car() = default;

        /**
         * @brief Show Car specs, overriding method in parent class
         *
         */
        void show() const override;

        /**
         * @brief  Estimate Car price, overriding method in parent class
         *
         * @return double: estimated price
         */
        double estimate() const override;

        /**
         * @brief Ouput stream operator << overloading
         *
         * @param os
         * @param car
         * @return std::ostream&
         */
        friend std::ostream& operator<<(std::ostream & os, const Car & car);
};