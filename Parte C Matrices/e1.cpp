#include <iostream>
#include <limits>

using namespace std;

int main(int argc, char const *argv[])
{
    int filas, columnas;

    cout << "Ingrese el numero de filas: " << endl;
    cin >> filas;
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    cout << "Ingrese el numero de columnas: " << endl;
    cin >> columnas;
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    int **matriz = new int *[filas];
    for (int i = 0; i < filas; i++)
    {
        matriz[i] = new int[columnas];
    }

    int aux;

    for (int y = 0; y < filas; y++)
    {
        for (int x = 0; x < columnas; x++)
        {
            cout << "Ingrese valor para (" << x << ", " << y << "):" << endl;
            cin >> aux;
            matriz[y][x] = aux;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    cout << "[";
    for (int y = 0; y < filas; y++)
    {
        if (y == 0)
        {
            cout << "[";
        }
        else
        {
            cout << " [";
        }

        for (int x = 0; x < columnas; x++)
        {
            cout << matriz[y][x];
            if (x != columnas - 1)
            {
                cout << ", ";
            }
        }
        if (y == filas - 1)
        {
            cout << "]";
        }
        else
        {
            cout << "]," << endl;
        }
    }
    cout << "]" << endl;
}
