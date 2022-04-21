#include <iostream>
#include <limits>

using namespace std;

void printMatriz(int m[2][2])
{
    cout << "[";
    for (int y = 0; y < 2; y++)
    {
        if (y == 0)
        {
            cout << "[";
        }
        else
        {
            cout << " [";
        }

        for (int x = 0; x < 2; x++)
        {
            cout << m[y][x];
            if (x != 2 - 1)
            {
                cout << ", ";
            }
        }
        if (y == 2 - 1)
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
    int M1[2][2];
    int M2[2][2];

    int aux;

    for (int y = 0; y < 2; y++)
    {
        for (int x = 0; x < 2; x++)
        {
            cout << "Ingrese valor para (" << x << ", " << y << "):" << endl;
            cin >> aux;
            M1[y][x] = aux;
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    for (int y = 0; y < 2; y++)
    {
        for (int x = 0; x < 2; x++)
        {
            M2[y][x] = M1[y][x] + 1;
        }
    }

    cout << endl
         << "Matriz M1:" << endl;
    printMatriz(M1);
    cout << endl
         << "Matriz M2 (generada de M1 + 1):" << endl;
    printMatriz(M2);
}