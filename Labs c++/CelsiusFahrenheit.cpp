#include <iostream>
using namespace std;
int manin()
{
    double celsius,fahrenheit;

    cout<<"Ingrese la temperatura en grados Celsius";
    cin >> celsius;

    fahrenheit = celsius * 9/5 + 32;

    cout<<"La temperatura en grados fahrenheit es"<<fahrenheit << "grados fahrenheit"<<endl;

    return 0;
}