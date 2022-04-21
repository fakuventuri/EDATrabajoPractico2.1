#include <iostream>
#include <limits>

using namespace std;

void printMatriz(int m[3][3]);
void fillMatriz(int m[3][3]);

int main(int argc, char const *argv[])
{
    int matriz1[3][3];
    int matriz2[3][3];
    int result[3][3];

    cout << "Matriz 1: " << endl;
    fillMatriz(matriz1);

    cout << "Matriz 2: " << endl;
    fillMatriz(matriz2);

    cout << endl;

    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            result[y][x] = matriz1[y][x] + matriz2[y][x];
        }
    }

    cout << "Resultado de la suma de matrices: " << endl;
    printMatriz(result);
}

void fillMatriz(int m[3][3])
{
    int aux;

    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            cout << "Ingrese valor para (" << x << ", " << y << "):" << endl;
            cin >> aux;
            m[y][x] = aux;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}

void printMatriz(int m[3][3])
{
    cout << "[";
    for (int y = 0; y < 3; y++)
    {
        if (y == 0)
        {
            cout << "[";
        }
        else
        {
            cout << " [";
        }

        for (int x = 0; x < 3; x++)
        {
            cout << m[y][x];
            if (x != 3 - 1)
            {
                cout << ", ";
            }
        }
        if (y == 3 - 1)
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