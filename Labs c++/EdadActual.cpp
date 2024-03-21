 #include <iostream>
 using namespace std;

 int main()
 {
    //Definir variables
    int fechaNacimiento, epocaActual, edad;

    //Para ingresar valores necesarios (fecha y epoca actual)
    cout << "Ingresa su Fecha de nacimiento: ";
    cin >> fechaNacimiento;

    cout << "Ingresa el epoca Actual: ";
    cin >> epocaActual;

    //Proceso para determninar la edad
    edad= epocaActual - fechaNacimiento;


    //Resultado final (tu edad aprroximada)
    cout << "Su edad aproximada es: " << edad << endl;

    return 0;
 }
