#include <iostream>
using namespace std;

int main()
{

    //definir variables
    double radio, area;
    const double PI = 3.14;

    // Ingresar el valor
    cout<< "Ingresa la medida del radio:";
    cin >> radio;

    //Proceso para calcular el area
    area= PI * radio * radio; 


    // muestra el resultado
    cout <<"El area del circulo es:" << area <<endl;

    return 0;
}
