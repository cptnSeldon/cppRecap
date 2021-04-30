#include "truck.h"

Truck::Truck(string _brand, int _km, double _price, int _productionDate, float _height, float _volume)
: Vehicle(_brand, _km, _price, _productionDate)
{
    //height must be between 1 and 3 meters
    (_height >= 1 || _height <= 3) ? this->height = _height : this->height = 1;

    //volume must be between 2 and 64 m3
    (_volume >= 2 || _volume <= 64) ? this->volume = _volume : this->volume = 2;
}

void Truck::show() const
{
    Vehicle::show();

    cout << "Height [m]: "
          << height
          << endl
          << "Volume [m3]: "
          << volume
          << endl
          << "Estimated price: " << estimate()
          << endl
          << endl;
}

double Truck::estimate() const
{
    //Trucks lose 5% of their value per year
    double percentage = (CURRENT_YEAR - this->productionDate) * 5;
    double valueToSubstract = this->price / 100 * percentage;
    double result = 0.;

    valueToSubstract > this->price ? result = 0. : result = (price - valueToSubstract);

    return result;
}