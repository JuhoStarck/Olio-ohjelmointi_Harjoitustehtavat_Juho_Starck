#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    // Gordon Ramsay

    // Chef objChef = Chef("Gordon Ramsay");
    // objChef.makeSalad();
    // objChef.makeSoup();

    // Antohny Bourdain

    ItalianChef objItalianChef = ItalianChef("Anthony Bourdain");
    objItalianChef.makeSalad();
    objItalianChef.makeSoup();
    objItalianChef.makePasta();
    cout<<"name of the Italian Chef is "<<objItalianChef.getName()<<endl;

    return 0;
}
