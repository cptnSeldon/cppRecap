#include "car.h"

Car::Car(string _brand, int _km, double _price, int _productionDate, FuelType _fuelType, int _doors)
: Vehicle(_brand, _km, _price, _productionDate), fuelType(_fuelType)
{
    (_doors == 3 || _doors == 5) ? this->doors = _doors : this->doors = 3;
}


void Car::show() const
{
    Vehicle::show();
    cout << "Fuel type: " << (char)this->fuelType << endl
         << "Doors: " << this->doors << endl
         << "Estimated price: " << this->estimate()
         << endl;
}

double Car::estimate() const
{
    //Cars lose 10% of their value per year
    double percentage = (CURRENT_YEAR - this->productionDate) * 10;
    double valueToSubtract = this->price / 100 * percentage;
    double result = 0.;

    valueToSubtract > this->price ? result = 0 : result = (this->price - valueToSubtract);

    return result;
}

std::ostream& operator<<(std::ostream & os, const Car & car)
{
    return os << "Fuel type: " << (char)car.fuelType << endl
         << "Doors: " << car.doors << endl
         << "Estimated price: " << car.estimate()
         << endl;
}