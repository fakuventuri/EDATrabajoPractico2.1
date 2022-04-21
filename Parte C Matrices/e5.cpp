#include <iostream>
#include <limits>

using namespace std;

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

int main(int argc, char const *argv[])
{
    int matriz[3][3];
    int traspuesta[3][3];

    int aux;

    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            cout << "Ingrese valor para (" << x << ", " << y << "):" << endl;
            cin >> aux;
            matriz[y][x] = aux;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    cout << endl;

    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            traspuesta[x][y] = matriz[y][x];
        }
    }

    printMatriz(traspuesta);
}