# include <iostream>
using namespace std;

int main()
{
    //definir las variables una de palabras y la otra tipo entero
    string miembro;
    int cantidadEntradas;

    //recolectando los datos de la persona
    cout << "Usted es miembro del teatro (si/no): ";
    getline (cin,miembro);

    cout << "Cuantas entradas deseas? ";
    cin >> cantidadEntradas;

    //primera seleccion acepta a los que son miembros.
    if (miembro == "si")

    {
        // Si la persona es miembro y compra mas de 5 entradas
     if (cantidadEntradas > 5)

        {
            cout<< "Usted ha recibido un descuento de 15%, en las entradas!!! " <<endl;
        }
        // si eres miembro pero no cumple el requisito para obtener 15% de descuento
        else
        {
            cout<< "Usted tiene un descuento de 10%, en todas las entradas!! " <<endl;
        }
    }

    
    // cuando no es miembro seguira estos pasos
    if (miembro == "no")
    {
        // si compra mas de 10 entradas y el mensaje que proyectara
        if (cantidadEntradas > 10)
        {
         cout << "Usted tiene un descuento de 5%, en las entradas! " <<endl;
        }

        //cuando no cumple ninguno de los requisitos
        else
        {
         cout<< "Usted no aplica para el descuento :(. "<<endl;
        }
    }       



 return 0;
       

}