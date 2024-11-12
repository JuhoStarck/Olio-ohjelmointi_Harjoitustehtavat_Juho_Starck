#include <iostream>
#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <memory>

using namespace std;

int main()
{
    // Vaihe 1: Car-luokka
    Car objCar;
    objCar.setBrand("Ford");
    objCar.setModel("Fiesta");
    objCar.setYearModel(2018);
    objCar.printData();

    // Vaihe 2: Rectangle-luokka
    Rectangle *objRectangle;
    objRectangle = new Rectangle;
    objRectangle -> setWidth(20);
    objRectangle -> setHeight(15);
    cout<<"Rectangle area: "<<objRectangle->getArea();
    cout<<", rectangle circumference: "<<objRectangle->getCircum()<<endl;
    delete objRectangle;
    objRectangle = nullptr;

    // Vaihe 3: Student-luokka
    unique_ptr<Student> objStudent = make_unique<Student>();
    objStudent -> setName("Veikko Alen");
    objStudent -> setStudentNumber(123456);
    objStudent -> setAverage(4.2);
    cout<<"Name: "<<objStudent->getName()<<", student number: "<<objStudent->getStudentNumber();
    cout<<", average: "<<objStudent->getAverage()<<endl;

    return 0;
}
