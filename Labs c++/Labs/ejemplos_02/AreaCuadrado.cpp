#include <iostream>
using namespace std;

int main()
{
  //Definir variables
  double area, lado;

  //Para ingresar los valores requeridos (lado)
  cout << "Ingrese el lado del cuadrado: ";
  cin >> lado;

  //Proceso matematico para determinar el area
  area = lado * lado;

  //Resultado final
  cout << "El area del cuadrado es: "  <<  area  << endl;


  return 0;
}