#include <iostream>
using namespace std;
int main()

{
    //Definir variables
    double nota1,nota2,nota3,nota4, promedio;

    //Entradas de valores de los 4 notas

    cout << "Ingrese su primera nota de (1/100): ";
    cin >> nota1;

    cout << "Ingrese su segunda nota de (1/100): ";
    cin >> nota2;

    cout << "Ingrese su tercera nota de (1/100): ";
    cin >> nota3;

    cout << "Ingrese su cuarta nota de (1/100): ";
    cin >> nota4;

    //Proceso para obtener el promedio final
    promedio = (nota1 + nota2 + nota3 + nota4) /4;

    //Muestra el promedio final
    cout<<"El promedio final de la clase es " << promedio << " Feliidades!" << endl;

    return 0;
}