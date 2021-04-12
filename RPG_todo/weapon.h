#pragma once
#include <string>

using namespace std;

/**
 * @brief Weapon class used by Character class
 *
 */
class Weapon
{
    private:
        string name;
        int damage;

    public:
        //CONSTRUCTORS
        /**
         * @brief Construct a new Weapon object (default)
         *
         */
        Weapon();

        /**
         * @brief Construct a new Weapon object (parameterized)
         *
         * @param _name: Weapon name
         * @param _damage: Weapon damage
         */
        Weapon(string _name, int _damage);

        /**
         * @brief Construct a new Weapon object (copy)
         *
         * @param other: other user's Weapon
         */
        Weapon(const Weapon & other);

        //DESTRUCTOR
        /**
         * @brief Destroy the Weapon object
         *
         */
        ~Weapon();

        //GETTERS
        /**
         * @brief Get Weapon name
         *
         * @return string: name
         */
        string getName() { return this->name; }
        /**
         * @brief Get Weapon damage
         *
         * @return int: damage
         */
        int getDamage() { return this->damage; }

        //SETTERS
        /**
         * @brief Set Weapon name
         *
         * @param _name
         */
        void setName(string _name) { this->name = _name; }
        /**
         * @brief Set Weapon damage
         *
         * @param _damage
         */
        void setDamage(int _damage) { this->damage = _damage; }

        //FUNCTIONS
        /**
         * @brief Print Weapon characteristics
         *
         */
        void displayStats();
};