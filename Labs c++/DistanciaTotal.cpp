#include <iostream>
using namespace std;
int main()
{
    // Definir variables
    double distancia,velocidad,tiempo;

    // Ingresar los valores de velocidad y tiempo
    cout << "Ingrese la velocidad promedio: ";
    cin >> velocidad;


    cout << "Ingrese la tiempo promedio: ";
    cin >> tiempo;

    //Proceso para obtener la distacia
    distancia= velocidad * tiempo;

    //Resultado del proceso 
    cout << "La distancia total recorrida fue:" << distancia << endl;


  return 0;
}