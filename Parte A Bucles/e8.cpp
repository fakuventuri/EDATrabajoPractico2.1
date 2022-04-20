#include <iostream>
#include <limits>

using namespace std;

int main(int argc, char const *argv[])
{
    const int apruebaCon = 6;

    int nota;

    int numAlumno = 1;
    int numExamen = 0;

    int tempCountEAprobados = 0;

    int aprobaronTodos = 0;
    int aprobaronAlMenosUno = 0;
    int aprobaronSoloElUltimo = 0;

    while (numAlumno <= 5)
    {
        cout << "Ingrese las notas del alumno numero " << numAlumno << endl;

        do
        {
            cout << "Ingrese una nota del 1 al 10" << endl;
            cin >> nota;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            if (0 < nota & nota <= 10)
            {
                numExamen++;
                if (nota >= apruebaCon)
                {
                    if (numExamen == 3 && tempCountEAprobados == 0)
                    {
                        aprobaronSoloElUltimo++;
                    }

                    tempCountEAprobados++;
                }
            }
            else
            {
                cout << "Ingrese una nota entre 1 y 10." << endl;
            }

        } while (numExamen < 3);

        if (tempCountEAprobados == 3)
        {
            aprobaronTodos++;
            aprobaronAlMenosUno++;
        }
        else if (tempCountEAprobados != 0)
        {
            aprobaronAlMenosUno++;
        }

        numAlumno++;
        tempCountEAprobados = 0;
        numExamen = 0;
    }

    cout << "a) Alumnos que aprobaron todos los examenes: " << aprobaronTodos << endl;
    cout << "b) Alumnos que aprobaron al menos uno de los examenes: " << aprobaronAlMenosUno << endl;
    cout << "c) Alumnos que aprobaron unicamente el ultimo examen: " << aprobaronSoloElUltimo << endl;

    return 0;
}
