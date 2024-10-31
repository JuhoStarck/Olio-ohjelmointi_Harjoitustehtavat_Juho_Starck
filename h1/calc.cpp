#include <iostream>
#include <iomanip>
#include "calc.h"

using namespace std;

void calcSum(int a, int b) {
    cout << "calcSum funktio: ";
    cout << a << " + " << b << " = " << a + b << endl;
}

void calcDiv(int a, int b) {
    if(b != 0) {
        cout << "calcDiv funktio: ";
        cout << fixed << setprecision(2) << a << " / " << b << " = " << (float)a / b << endl;
    }
    else {
        cout << "Jakaja on nolla" << endl;
    }
}

int retSum(int a, int b) {
    int result;
    result = a + b;
    return result;
}

float retDiv(int a, int b) {
    float result;
    result = (float)a / b;
    if(b == 0) {
        cout << "Jakaja on nolla" << endl;
        return 0;
    }
    else {
        return result;
    }
}
