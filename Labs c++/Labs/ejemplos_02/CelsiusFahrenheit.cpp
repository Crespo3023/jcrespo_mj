#include <iostream>
using namespace std;
int main()
{
    //Definir el variables
    double celsius, fahrenheit;


    //Para Ingresar valores (Temperatura en grados Celsius)
    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;

    //Proceso para cambiar a grados Fahrenheit
    fahrenheit = celsius * 9/5 + 32;

    // Resultado final
    cout<<"La temperatura en grados fahrenheit es " << fahrenheit << " fahrenheit" << endl;

    return 0;
}