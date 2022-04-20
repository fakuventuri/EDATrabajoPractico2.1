#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int valNum;
    int total = 0;

    cout << "Ingrese el numero maximo: " << endl;

    cin >> valNum;

    for (int i = 1; i <= valNum; i++)
    {
        total += pow(2, i);
    }

    cout << "El resultado es: " << total;
}
