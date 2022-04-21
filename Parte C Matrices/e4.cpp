#include <iostream>
#include <limits>

using namespace std;

int main(int argc, char const *argv[])
{
    int filas, columnas, num;
    srand(time(NULL));

    cout << "Ingrese el numero de filas: " << endl;
    cin >> filas;
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    cout << "Ingrese el numero de columnas: " << endl;
    cin >> columnas;
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    int **matriz = new int *[filas];
    int **matriz2 = new int *[filas];
    for (int i = 0; i < filas; i++)
    {
        matriz[i] = new int[columnas];
        matriz2[i] = new int[columnas];
    }

    for (int y = 0; y < filas; y++)
    {
        for (int x = 0; x < columnas; x++)
        {
            matriz[y][x] = 10 + rand() % 89;
        }
    }

    for (int y = 0; y < filas; y++)
    {
        for (int x = 0; x < columnas; x++)
        {
            matriz2[y][x] = matriz[y][x];
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
            cout << matriz2[y][x];
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
