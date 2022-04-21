#include <iostream>
#include <limits>

using namespace std;

int main(int argc, char const *argv[])
{
    int matriz[3][3];

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

    for (int i = 0; i < 3; i++)
    {
        cout << matriz[i][i] << endl;
    }
}