#include <iostream>
using namespace std;

int main()
{

  //Definir las variables
  double area, base, altura;

  //Para ingresar los valores de base y altura
  cout << "Ingrese la base del rectangulo: ";
  cin >> base;

  cout << "Ingrese la altura del rectangulo: ";
  cin >> altura;

  //Proceso para obtener la area
  area = base * altura;

  //Muestra el resultdo final
  cout << "El area del rectangulo es:  "  <<  area  << endl;


  return 0;
}