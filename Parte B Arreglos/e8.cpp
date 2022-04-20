#include <iostream>
#include <vector>
#include <conio.h>
#include <limits>

using namespace std;

int main(int argc, char const *argv[])
{

    int nums[5] = {};
    int resultado[5] = {};
    int aux;

    cout << "Ingrese 5 numeros: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> aux;
        nums[i] = aux;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    for (int i = 0; i < 5; i++)
    {
        resultado[i] = nums[i] * 2;
    }

    cout << endl
         << "Arreglo resultante al multiplicar por 2: "
         << endl
         << "[";
    for (int i : resultado)
    {
        cout << " " << i << " ";
    }
    cout << "]";
}
