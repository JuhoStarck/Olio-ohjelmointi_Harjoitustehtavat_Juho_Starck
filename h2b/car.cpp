#include "car.h"

Car::Car(string b, string m, int y) {
    brand = b;
    model = m;
    yearModel = y;
}

void Car::printData()
{
    cout<<"Brand: "<<brand<<", model: "<<model<<", year model: "<<yearModel<<endl;
}
