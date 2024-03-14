#include <iostream>
# include <string>
using namespace std;

int main() 
{
    int entero;
    float flotante;
    char caracter;
    string cadena;

    cout <<"Ingrese un numero entero:";
    cin>>entero;

    cout <<"Ingrese un numero flotante:";
    cin>>flotante;

    cout <<"Ingrese un caracter:";
    cin>>caracter;

    cout <<"Ingrese una cadena de caracteres:";
    cin.ignore();
    getline(cin,cadena);

    cout << "Fin del programa";
    
    return 0;
}