# include <iostream>
using namespace std;

int main ()
{
    int opcion;
    
    cout << "Bienvenido a Riko's Cafe: " << endl;
    cout << "MENU" << endl;
    cout << "1. Cafe " << endl;
    cout << "2. te" << endl;
    cout << "3. Chocolate Caliente" << endl;
    cout << "4. Jugo de Naranja" << endl;
    cout << "--------------------------------" << endl;
    cout << "Por favo selecciona tu bebida: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1: //cafe 
        cout <<  "El precio del Cafe es $2"<< endl;
        break;

    case 2: // te
        cout << "El precio del Te es 1.5" << endl;
        break;

    case 3: // Chocolate Caliente
        cout <<"El precio del Chocolate es $2.5" << endl;
        break;
    
    case 4: // Jugo de Naranja
        cout << " El precio del Jugo de Naranja es $3" << endl;
        break;






    default:
         cout << "Opcion NO valida. Por favor, eliga una bebida del MENU" << endl;
        break;
    }

    return 0;
}