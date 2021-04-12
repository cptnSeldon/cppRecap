#include "weapon.h"

#include <iostream>

//CONSTRUCTORS
Weapon::Weapon() : name("Basic weapon"), damage(1)
{
    cout << "Weapon '" << this->name << "' will be created. - default" << endl;
}

Weapon::Weapon(string _name, int _damage) //: name(_name), damage(_damage)
{
    if(_name == "")
    {
        this->name = "No name";
    }
    else
    {
        this->name = _name;
    }
    if(_damage <= 0)
    {
        this->damage = 10;
    }
    else
    {
        this->damage = _damage;
    }

    cout << "Weapon '" << this->name << "' will be created. - parameterized" << endl;
}
Weapon::Weapon(const Weapon & other) : name(other.name), damage(other.damage)
{
    cout << "Weapon '" << this->name << "' will be created. - copy" << endl;
}

//DESTRUCTOR
Weapon::~Weapon()
{
    cout << "~ Weapon '" << this->name << "' will be destroyed." << endl;
}

//FUNCTIONS
void Weapon::displayStats()
{
    cout << endl;
    cout << "WEAPON:" << endl;
    cout << "Name: " << this->name << endl << "Damage: " << this->damage << endl;
    cout << endl;
}