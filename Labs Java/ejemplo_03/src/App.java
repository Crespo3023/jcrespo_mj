import java.util.Scanner;

public class App
{
public static void main(String[] args) {
    Scanner scanner= new Scanner(System.in);

    System.out.print("Ingrese un numero: ");
    int entero= scanner. nextInt();

    System.out.print("Ingrese un numero flotante: ");
    float flotante= scanner. nextFloat();

    System.out.print("Ingrese un caracter: ");
    char caracter= scanner.next().charAt(0); 

    System.out.print("Fin del programa");

    scanner.nextLine();
    String cadena= scanner. nextLine();
    }
}