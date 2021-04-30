#include "vehicle.h"

Vehicle::Vehicle(string _brand, int _km, double _price, int _productionDate)
{
    this->brand = _brand;

    //condition ? if true : if false;
    _km < 0 ? this->km = 0 : this->km = _km;

    _price < 0 ? this->price = 0 : this->price = _price;

    _productionDate > CURRENT_YEAR ?
    this->productionDate = CURRENT_YEAR :
    (
        _productionDate < MIN_YEAR ?
        this->productionDate = MIN_YEAR : this->productionDate = _productionDate
    );
}

void Vehicle::show() const
{
    cout << "Brand: " << this->brand << endl
         << "Km: " << this->km << endl
         << "Price: " << this->price << endl
         << "Production date: " << this->productionDate
         << endl;
}