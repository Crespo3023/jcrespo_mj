import java.util.Scanner;

public class Java_while{
    public static void main (String[]arg){
        Scanner scanner= new Scanner (System.in);

        //Definir variables y un contador
        int contador=1;
        String nombre;
        
        //Recolectar la informacion de la persona y almacenarla en la variable nombre
        System.out.print("Introduce tu nombre y apellido : ");
        nombre = scanner.nextLine();

        //El ciclo que permitirá repetir 10 veces la info recolectada
        while (contador <= 10) {
            //Mostrará los nombres
            System.out.println(contador+ "- " + "Hola!!" + nombre) ;

            //Sumara la variable contador que es igual a 0 y sumara hasta llegar a 10
            contador++;

        }

    }
}

