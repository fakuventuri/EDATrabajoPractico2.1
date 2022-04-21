#include <iostream>
#include <limits>

using namespace std;

void printMatriz(int m[3][3]);
void fillMatriz(int m[3][3]);
bool esSimetrica(int m1[3][3]);

int main(int argc, char const *argv[])
{
    int matriz[3][3];

    fillMatriz(matriz);

    cout << endl;

    if (esSimetrica(matriz))
    {
        cout << "La matriz es simetrica." << endl;
    }
    else
    {
        cout << "La matriz NO es simetrica." << endl;
    }

    printMatriz(matriz);
}

bool esSimetrica(int m1[3][3])
{
    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            if (m1[y][x] != m1[x][y])
            {
                return false;
            }
        }
    }
    return true;
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