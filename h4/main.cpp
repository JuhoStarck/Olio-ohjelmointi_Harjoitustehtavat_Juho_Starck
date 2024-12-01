#include <iostream>
#include "car.h"

using namespace std;

int main()
{
    Car objCar = Car("Toyota", "Corolla");
    objCar.setEngine();
    objCar.setWheels();
    objCar.printData();

    return 0;
}
