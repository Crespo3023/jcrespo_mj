# include <iostream>
using namespace std;


double ganancias (double cantidadVendida); // definir funcion

int main()
{
    //definir la variables
    double cantidadVendida;
    double resultadoFinal;
   
    //recolectar informacion de la cantidad de objetos vendidos
    cout<< " Introduce la cantidad de dinero total que haya adquirido con las ventas realizadas: ";
    cin >> cantidadVendida;

    //Condición cuando las personas venden objetos en cantidades menor a 1500
    if ( cantidadVendida < 1500)
    {
        resultadoFinal = ganancias (cantidadVendida); // llamada a la funcion  

        cout<< "Usted ha ganado $" << resultadoFinal << endl; // el mensaje que imprimira si vende menos de la cantidad 1500.

    }

     //Condicion cuando las personas venden mas de 1500 objetos
    if ( cantidadVendida >= 1500 )
    {
        resultadoFinal= ganancias (cantidadVendida); // llamada a la funcion para obtener el resultado final de ganancias

        cout << "Usted ha recibido un bono de $125 y su balance original es: $" << resultadoFinal << " obteniendo un total de $" << resultadoFinal + 125 << endl; // el mensaje que imprimira cuando la persona cumple el requisito de 1500 o mas
    }


}

   double ganancias (double cantidadVendida)
 {
    return cantidadVendida * 0.15 ; // calculando la cantidad de ganancias obtenidas multiplicandolo por el 0.15 que seria el 15%
 }


