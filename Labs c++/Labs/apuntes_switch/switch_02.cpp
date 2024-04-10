# include <iostream>
using namespace std;

int main ()
{
    //Definiendo Variables
    int opcion;
    // Imprime el MENU o la variedad que se tiene
    cout << "Bienvenido a Riko's Music: " << endl;
    cout << "MENU" << endl;
    cout << "1. Guitarra, 2. Piano, 3. Bateria , 4. Violin " << endl;
    cout << "--------------------------------" << endl;

    // Entrada de la eleccion de instrumento
    cout << "Por favor, Ingrese el tipo de instrumento: ";
    cin >> opcion;

    //Condicion switch
    switch (opcion)

    //Las salidas de la opcion que sea elegida (todos los case)
    {
    case 1: // Guitarra
        cout << " El descuento de la Guitarra es del 10% " << endl;
        break;
    
    case 2: // Piano
        cout << "El descuento del Piano es del 15% " << endl;
        break;
    
    case 3: // Bateria
        cout << " El descuento de la Bateria es del 20% " << endl;
        break;
    
    case 4: // Violin
        cout << "El descuento del Violin es de 12% " << endl;
        break;
        
    case 5: // Flauta
        cout << "El descuento de del 8 " << endl;
        break;
    
    // Si eligiera algo fuera del MENU proporcionado
    default:
        cout << "Elija un Instrumento dentro del MENU por favor" << endl;
        break;
    }

    return 0;
}