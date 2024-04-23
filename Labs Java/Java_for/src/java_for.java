import java.util.Scanner;

public class java_for{
    public static void main (String[]arg){
        Scanner scanner= new Scanner (System.in);

        //Definir variables y acumulador
        float temp = 0;
        float acumuladorTemp = 0;
        float tempPromedio;

        // ciclo para realizar los 12 intentos (los meses anuales)
        for(int i=1; i<=12; i ++) {

        //Recolecta la informacion de la temperatura de los meses
        System.out.print ("Ingrese la temperatura del mes " + i + ": ");
        temp = scanner.nextFloat();

        //Acumula las temperatura y las suma
        acumuladorTemp= acumuladorTemp + temp;
        }
        //calculo que divide las temperaturas acumuladas por la cantidad de meses anual
        tempPromedio= acumuladorTemp / 12;

        // Para que se vea mas organizado a la vista del usuario
        System.out.println ("------------------------------------------------------------"); 
        
        //El resultado final, la temperatura promedio de todos los meses
        System.out.println ("La temperatura promedio de los 12 meses es: "+ tempPromedio );
    }
}

