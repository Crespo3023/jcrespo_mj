# include <iostream>
using namespace std;

int main ()
{
    //Definir variables y acumuladores
    int contador=1;
    double acumuladorTemp=0;
    double temperatura;
    double temp_promedio;
   
    
    //El ciclo con la condicion requerida para cumplir solo 12 repeticiones
    while (contador <= 12 ){

        //Recolectar info. de las termperaturas de los meses
        cout << "Ingrese la temperatura del mes " << contador << " : ";
        cin >> temperatura;

        acumuladorTemp = acumuladorTemp + temperatura; // Acumula la temperatura y las suma cada una
        contador++; // suma cada repeticion de 1 + 1 asi sucesivamente hasta llegar a 12
    }
       
    temp_promedio = acumuladorTemp / 12; //proceso para obtener la temperatura promedio
    cout << "---------------------------------------------------------------"<< endl;// division para que se vea mas organizado
    cout << " La temperatura promedio de los 12 meses son aproximadamente: " << temp_promedio << endl; //Resultado final

    return 0;
}