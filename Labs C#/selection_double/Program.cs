using System;

namespace Program {
    class Program {
        static void Main(string[]args) { 
            Console.Write ("Ingrese su estado (activo/inactivo): ");
            string answer= Console.ReadLine();

            // Comando de seleccion que compara la respuesta con el estado "activo"
            if(answer == "activo")
            {
             Console.WriteLine("Usted puede solicitar prestamos de libros!");
            }

            // Cuando no es activo
            else
            {
             Console.WriteLine("Usted no puede solicitar prestamos de libros");
            }
        }
    }
 }

