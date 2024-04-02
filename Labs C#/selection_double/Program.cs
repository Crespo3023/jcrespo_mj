using System;

namespace Program {
    class Program {
        static void Main(string[]args) { 
            Console.Write ("Ingrese su estado (activo/inactivo): ");
            string answer= Console.ReadLine();

            if(answer == "activo"){
                Console.WriteLine("Usted puede solicitar prestamos de libros!");
            }
            else
            {
                Console.WriteLine("Usted no puede solicitar prestamos de libros");
            }
        }
    }
 }

