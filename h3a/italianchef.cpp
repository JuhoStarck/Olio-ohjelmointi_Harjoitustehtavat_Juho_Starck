#include "italianchef.h"

ItalianChef::ItalianChef(string n):Chef(n)
{
    name = n;
    cout<<"Italian Chef "<<name<<" konstruktori"<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<<"Italian Chef "<<name<<" destruktori"<<endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout<<"Italian Chef "<<name<<" makes pasta"<<endl;
}
