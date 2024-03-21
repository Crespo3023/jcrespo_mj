#include <iostream>
using namespace std;

int main()
{
    //variables
    double area, base, altura, perimetro;

    //codigos para ingresar valores

    cout << "Ingrese la base del rectangulo: ";
    cin >> base;

    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;

    //procesos para calcular area y perimetro
    area = base * altura;

    perimetro =  (2 * altura)  +  (2 * base);


    //muestra el resultado deseado
    cout << "El area del rectangulo es :"  <<  area  << endl;

    cout << "El perimetro del rectangulo es :"  <<  perimetro  << endl;

    

  return 0;
}