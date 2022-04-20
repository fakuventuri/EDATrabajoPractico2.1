#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int valNum;
    int total = 0;
    bool positivo = true;

    cout << "Ingrese el numero maximo: " << endl;

    cin >> valNum;

    for (int i = 1; i <= valNum; i++)
    {
        if (positivo)
        {
            total += i;
            positivo = false;
        }
        else
        {
            total -= i;
            positivo = true;
        }
    }

    cout << "El resultado es: " << total;
}
