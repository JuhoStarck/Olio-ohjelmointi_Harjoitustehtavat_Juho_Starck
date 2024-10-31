#include <iostream>
#include <iomanip>
#include "calc.h"

using namespace std;


int main()
{
    int a, b, resultSum;
    float resultDiv;

    cout << "Anna eka kokonaisluku: " << endl;
    cin >> a;
    cout << "Anna toka kokonaisluku: " << endl;
    cin >> b;

    resultSum = retSum(a,b);
    cout << "retSum funktio: ";
    cout << a << " + " << b << " = " << resultSum << endl;
    resultDiv = retDiv(a,b);
    cout << "retDiv funktio: ";
    if(b != 0) {
        cout << fixed << setprecision(2) << a << " / " << b << " = " << resultDiv << endl;
    }

    calcSum(a,b);
    calcDiv(a,b);

    // cout << a << " + " << b << " = " << a + b << endl;
    // cout << fixed << setprecision(2) << a << " / " << b << " = " << (float)a / b << endl;
}
