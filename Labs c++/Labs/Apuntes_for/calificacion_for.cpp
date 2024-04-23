# include <iostream>
using namespace std;

int main()
{
    //Definir variables y la primera almacenará los datos
    double sumaCalificacion=0;
    double calificacionEstudiante;
    double promedio;
    int cantidadEstudiante;
    string nombreEstudiante;

    //Recolectar info que pondra el limite al comando for
    cout << "Ingrese la cantidad de estudiantes (Maximo 10 estudiantes): ";
    cin >> cantidadEstudiante;

        //Repetira el procedimiento depende la cantidad de estudiantes
    for ( int i=1 ; i<= cantidadEstudiante; i++ )
        {
        //Recolectara la info de los estudiantes
        cout << "Estudiante # " << i << ":" << endl;

        cout << "Ingresa el nombre del estudiante: ";
        cin >> nombreEstudiante;

        cout << "El estudiante: " << nombreEstudiante << endl;

        cout << "Ingrese la calificacion de " << nombreEstudiante << ":";
        cin >> calificacionEstudiante;
        
        // almacenara los datos y sumara los nuevo que se añadan
        sumaCalificacion= sumaCalificacion+ calificacionEstudiante; 

    }

 
    //proceso matematico
    promedio= sumaCalificacion/cantidadEstudiante;

    //mensaje final
    cout << "El promedio general de las calificacion es del grupo es: " << promedio << endl;
 
    return 0;
}