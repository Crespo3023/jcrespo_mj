# include <iostream>
using namespace std;

int main ()

{
   //definir las variables tipo string porque es una cadena de letras
   string nombre;

      //Recolectar los datos de que lo que se imprira
      cout<< " Ingrese su nombre y apellido: ";
      getline (cin,nombre);

         //El ciclo que se repetira 10 veces
         for (int i = 1; i <= 10; i++) 

         //Resultado final (los nombres impresos 10 veces con un saludo en este caso "Hola,")
         {cout << i << ": Hola,  " << nombre << endl;}

 return 0;

}