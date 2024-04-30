# include <iostream>
using namespace std;

double Sumar (int a, double b);

int main ()
{
    //Llama a la funcion SUMAR con los argumentos 5 y 7
    double resultado= Sumar(5,7.5);

    //imprime el resultado de la suma
    cout << "La suma es: " << resultado << endl;
    return 0;

}

//Definicion de la funcion Sumar que recibe dos parametros int; retornando un valor tipo double
double Sumar (int a, double b)
{
    return a+b; //Retorna la sumea de a y b
}
