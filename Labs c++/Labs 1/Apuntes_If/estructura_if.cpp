# include <iostream>
using namespace std;

int main ()

{
   // Definir variables
   string code1;
   
   //Comando para ingresar su estado de membresia
   cout << "Usted esta (activo/inactivo) : ";
   getline(cin,code1);

   try 

   {
      // Comando de seleccion, cofirma que la perrsona este activa
      if ( code1 == "activo" )

         //Mensaje que enviara cuando el con codigo esta activo
      {
       throw " Usted al ser activo; \n  cualifica para solicitar prestamos de libros. " ;
      }
      
      
      // Segundo comando de seleccion cuando esta inactivo
      if (code1 == "inactivo" )

      // Mensaje que enviara cuando el cliente esta inactivo
      {
         throw " Lo lamento no puede solicitar prestamos de libros. ";
      }
      

   }

   //Recibira el Mensaje y lo mostrara al cliente
   catch(const char * mensaje)

   { 
      cout << " " << mensaje << endl;
   }

   return 0;  
}
