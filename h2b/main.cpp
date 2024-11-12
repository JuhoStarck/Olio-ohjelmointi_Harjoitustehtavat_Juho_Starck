#include <iostream>
#include "car.h"
#include <vector>

using namespace std;

int main()
{
    //vektorin luonti
    vector<Car> carList;

    //olioiden luonti
    Car objCar1 = Car("Ford", "Fiesta", 2018);
    Car objCar2 = Car("Volkswagen", "Golf", 1998);
    Car objCar3 = Car("Audi", "A4", 2024);

    //olioiden listoihin lisääminen
    carList.push_back(objCar1);
    carList.push_back(objCar2);
    carList.push_back(objCar3);

    //tulostaa toisen alkion tiedot
    cout<<"yksittainen tulostus:"<<endl;
    carList[1].printData();
    cout<<" "<<endl;

    //tulostaa kaikkien autojen tiedot
    cout<<"kaikkien autojen tulostus for-loopilla:"<<endl;
    for(int i = 0; i <= 2; i++) {
        carList[i].printData();
    }

    return 0;
}
