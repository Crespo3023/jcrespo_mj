#include <iostream>
using namespace std;

int main ()
{
    //El arreglos del 0 al 4 (5-1)
    int numeros [5];

    //Asignandole a cada espacio o celda un numero
    numeros [0] = 5;
    numeros [1] = 4;
    numeros [2] = 3;
    numeros [3] = 2;
    numeros [4] = 1;
    // int arr [5] = {1,2,3,4,5,} esta es otra manera de almacenarlos en una sola linea


    // imprimira el espacio en memoria del indice numero 3 que en este caso es 2
    cout << numeros [3] << endl;
    
 return 0;

}