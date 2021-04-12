#include <iostream>

#include "character.h"
#include "weapon.h"

using namespace std;

int main() {

    Character c1;

    c1.setName("Chuck");

    c1.displayStats();

    Weapon w1;

    w1.setName("Magic sword");

    w1.displayStats();

    c1.addWeapon(w1);
    c1.addWeapon(w1);

    c1.displayStats();

    c1.discardWeapon();
    c1.discardWeapon();

    c1.displayStats();

    return 0;
}