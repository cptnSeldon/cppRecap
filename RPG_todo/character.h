#pragma once

#include <string>
#include "weapon.h"

using namespace std;

/**
 * @brief Character base class
 *
 */
class Character
{
    private:
        string name;
        int health;
        Weapon * weapon;

    public:
        //CONSTRUCTORS
        /**
         * @brief Construct a new Character object (default)
         *
         */
        Character();

        /**
         * @brief Construct a new Character object (parameterized)
         *
         * @param _name: Character name
         * @param _health: Character health
         */
        Character(string _name, int _health);

        /**
         * @brief Construct a new Character object (copy)
         *
         * @param other: other Character
         */
        Character(const Character & other);

        //DESTRUCTOR
        /**
         * @brief Destroy the Character object
         *
         */
        ~Character();

        //GETTERS
        /**
         * @brief Get Character name
         *
         * @return string: name
         */
        string getName() const { return this->name; }

        /**
         * @brief Get Character health
         *
         * @return int: health
         */
        int getHealth() const { return this->health; }

        /**
         * @brief Get Character weapon
         *
         * @return Weapon*
         */
        Weapon * getWeapon() const { return this->weapon; }

        //SETTERS
        /**
         * @brief Set Character name
         *
         * @param _name
         */
        void setName(string _name) { this->name = _name; }

        /**
         * @brief Set Character health
         *
         * @param _health
         */
        void setHealth(int _health) { this->health = _health; }

        //FUNCTIONS
        /**
         * @brief Print Character characteristics
         *
         */
        void displayStats();

        //weapons
        /**
         * @brief Add Weapon to Character 'inventory'
         *
         * @param _weapon
         */
        void addWeapon(const Weapon & _weapon);

        /**
         * @brief Discard Weapon from Character 'inventory'
         *
         */
        void discardWeapon();
};