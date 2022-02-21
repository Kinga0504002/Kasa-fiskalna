#include<iostream>
#pragma once

using namespace std;

class MyClass
{
public:

    double cenatorby1;
    int ilosc;
    string nazwa;
};




int main()
{
    double cenatorby1 = 0.60;
    int ilosc = (0);
    


    cout << "Podaj ilosc:" << endl;
    cin >> ilosc;

    double Oblicz;
    Oblicz = ilosc * cenatorby1;

    cout << "Wartosc: " << Oblicz << endl;

    return 0;

}



