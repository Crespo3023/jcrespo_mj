#include <iostream>
using namespace std;

int sumaRango ( int inicio, int fin); // definir funcion

int main()
{
    int inicio, fin, resultado;

    cout << "Introduce el numero inicial del rango: ";
    cin>> inicio;

    cout<< "Introduce el numero final del rango: ";
    cin>> fin;
    
    resultado= sumaRango (inicio, fin);// llamada de la funcion

    cout << "La suma de todos los numeros enteros en el rango ["<< inicio <<","<< fin <<"] es: " << resultado << endl;

    return 0;
}

int sumaRango (int inicio, int fin)//funcion
{
    int suma=0;

    for ( int i = inicio; i<= fin; i++) // Ciclo que se ejecutara mientras i sea menos que el valor entrado como numero final
    {
        //suma += i;
        suma= suma + i;
    }
     return suma;
}
