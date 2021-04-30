#pragma once

#include "vehicle.h"

/**
 * @brief Truck class inheriting abstract class Vehicle
 *
 */
class Truck : public Vehicle
{
    private:
        float height = 3;
        float volume = 0;

    public:
        /**
         * @brief Construct a new Truck object -> default
         *
         */
        Truck() = default;
        /**
         * @brief Construct a new Truck object -> parameterized
         *
         * @param _brand
         * @param _km
         * @param _price
         * @param _productionDate
         * @param _height: in m
         * @param _volume: in m3
         */
        Truck(string _brand, int _km, double _price, int _productionDate, float _height, float _volume);

        /**
         * @brief Destroy the Truck object
         *
         */
        ~Truck() = default;

        /**
         * @brief Show Truck specs, overriding method in parent class
         *
         */
        void show() const override;
        /**
         * @brief  Estimate Truck price, overriding method in parent class
         *
         * @return double: estimated price
         */
        double estimate() const override;
};