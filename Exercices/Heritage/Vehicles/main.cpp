#include "car.h"
#include "truck.h"

int main()
{
    #pragma region VEHICLE
    /*
    Vehicle v1;
    Vehicle v2 = Vehicle("Toyota", -10, -10, 1800);
    Vehicle v3 = Vehicle("Volvo", 10, 10, 2100);
    Vehicle v4 = Vehicle("Ford", 10, 10, 1992);

    v1.show();
    v2.show();
    v3.show();
    v4.show();
    */
   #pragma endregion VEHICLE

    Car c1;
    Car * c2 = new Car("Ford", 10, 0.1, 2020, FuelType::Diesel, 5);

    c1.show();
    c2->show();

    cout << "<< Overloading" << endl;
    cout << c1 << endl;

    delete c2;
    c2 = nullptr;

    Truck t1;
    Truck t2 = Truck("MAN", 100, 100, 2021, 3, 60);

    t1.show();
    t2.show();


    return 0;
}