# include <iostream>
using namespace std;


int main ()

{
   // Definir variables y codigo de membresias activas

   string code1, Si, No;
   
   //Comando para ingresar su estado de membresia
   cout << "Usted esta activo escriba (1) o de ser inactivo ingresa (2):  ";
   getline(cin,code1);

   try 

   {
      // Comando de seleccion, cofirma que el codigo este activo
      if ( code1 == "activo" )

        //Mensaje que enviara cuando el con codigo esta activo
      {
       throw "Su membresia esta Activa \n  puede solicitar prestamo " ;
      }
      
      
      // Segundo comando de seleccion cuando esta inactivo
      else

      // Mensaje que enviara cuando el cliente esta inactivo
      {
         throw " Lo lamento no puede solicitar prestamos ";
      }
      

     

   }

   //Recibira el Mensaje y lo mostrara al cliente
   catch(const char * mensaje)

   { 
      cout << " " << mensaje << endl;
   }

   return 0;

   
}
