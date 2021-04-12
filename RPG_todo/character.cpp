#include "character.h"
#include <iostream>

//CONSTRUCTORS
Character::Character()
: name("Character"), health(100), weapon(nullptr)
{
    cout << "Character '" << this->name << "' will be created. - default" << endl;
    //this->name = "Character";
    //this->health = 100;
}

Character::Character(string _name, int _health)
: name(_name), health(_health), weapon(nullptr)
{
    cout << "Character '" << this->name << "' will be created. - parameterized" << endl;
    //this->name = _name;
    //this->health = _health;
}

//https://stackoverflow.com/questions/781760/copy-constructor-with-pointers$
Character::Character(const Character & other)
: name(other.name), health(other.health)
{
    cout << "Character '" << this->name << "' will be created. - copy" << endl;
    //this->name = other.name;
    //this->health = other.health;
    this->weapon = nullptr;

    addWeapon(*other.weapon);
}

//DESTRUCTOR
Character::~Character()
{
    cout << "~ Character '" << this->name << "' will be destroyed." << endl;
}

//FUNCTIONS
void Character::displayStats()
{
    cout << endl;

    cout << "CHARACTER:" << endl;
    cout << "Name: " << this->name << endl << "Health: " << this->health << endl;
    if(this->weapon != nullptr)
    {
        this->weapon->displayStats();
    }

    cout << endl;
}

//weapons
void Character::addWeapon(const Weapon & _weapon)
{
    if(this->weapon != nullptr)
    {
        cout << "< Weapon '" << this->weapon->getName() << "' is already in use ! >" << endl;
    }
    else
    {
        //http://www.cplusplus.com/reference/new/nothrow/
        this->weapon = new (nothrow) Weapon(_weapon);

        if(this->weapon == nullptr)
        {
            cout << "< An error has occurred during pointer allocation >" << endl;
        }
        else
        {
            cout << "=> New weapon '" << this->weapon->getName() << "' has been added !" << endl;
        }
    }

}

void Character::discardWeapon()
{
    if(this->weapon == nullptr)
    {
        cout << "< I don't have a weapon yet ! >" << endl;
    }
    else
    {
        delete this->weapon;
        this->weapon = nullptr;

        cout << "=> Weapon deleted !" << endl;
    }
}