import java.util.Scanner;

public class App {
    
public static void main(String[] args) {

    Scanner scanner = new Scanner(System.in);
    System.out.print("Introduce la cantidad de tiempo (anual) llevas trabajando: ");
    int n= scanner. nextInt();

        if (n >= 5) {
        System.out.println ( "¡Felicidades, usted cualifica para el bono $1000!");
         }

	    if (n < 5) {
        System.out.println ("Que mal, usted no ha cualificado para el bono :( ");
		
         }

    }
}
