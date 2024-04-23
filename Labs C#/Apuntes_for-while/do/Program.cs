using System;
class Program {
    static void Main (string[] args) {

        //Definir las variables acumuladoras y normales
        double temperaturas;
        double temp_promedio=0;
        int cantidad_meses=1; 

        do{
            //recolectar la info. necesaria 
            Console.Write("Ingrese temperatura de los 12 meses: ");
            //adjudicar la info recolectada a la variable temperatura
            temperaturas=double.Parse(Console.ReadLine());

            //sumar todas las temperatura y acumularlas en la variable temp_promedio
            temp_promedio += temperaturas;
            //sumar la cantidad y acumularlas para cumplir con los 12 meses exactos y no sobrepasarse
            cantidad_meses++;

           // La condicion para finalizar ese ciclo  
        } while (cantidad_meses <= 12);

        // La ecuacion para obtener el promedio
        temp_promedio = temp_promedio/12;
        
        // Resultado final (la temperatura promedio de los 12 meses)
        Console.WriteLine("La temperatura promedio es: " + temp_promedio);

    }
}
