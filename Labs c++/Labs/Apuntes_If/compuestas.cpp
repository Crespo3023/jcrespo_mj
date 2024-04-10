# include <iostream>
using namespace std;

int main () 
{
  //Definir variables
  string cantidadCompras;
  string vip;

  //Recolectar info. al cliente
  cout<< "El total de sus compras sobrepasa o iguala de los $150: (si/no) ";
  getline (cin, cantidadCompras);

  cout<< "Usted tiene la tarjeta de membresia VIP: (si/no) ";
  getline (cin,vip);


  //Compara la info recolectada y si cumple cualquiera de las dos
  if (cantidadCompras=="si" || vip =="si" )

  // El mensaje que mostara si una de las condiciones se cumple
  {
    cout << " Usted aplica para el descuento especial!! ";
  }

  //Mensaje que mostrara si no cumple ninguna de los requisitos 
  else
  {
    cout<<" Lo lamento usted no cumple con los requisitos para el descuento especial.";
  }
 
 return 0;
}