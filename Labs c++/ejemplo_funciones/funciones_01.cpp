# include <iostream>
using namespace std;


double ganancias (double cantidadVendida); // definir funcion

int main()
{
    //definir la variables
    double cantidadVendida;
    double resultadoFinal;
   

    cout<< " Introduce la cantidad de dinero total que haya adquirido con las ventas realizadas: ";
    cin >> cantidadVendida;

    if ( cantidadVendida < 1500)
    {
        resultadoFinal= ganancias (cantidadVendida);

        cout<< "Usted ha ganado " << resultadoFinal << endl;

    }

    if ( cantidadVendida >= 1500 )
    {
        resultadoFinal= ganancias (cantidadVendida);

        cout << "Usted ha recibido un bono de $125 obteniendo un total de $" << resultadoFinal + 125 << endl;
    }


}

   double ganancias (double cantidadVendida)
 {
    return cantidadVendida * 0.15 ; // calculando la cantidad de ganancias obtenidas
 }



