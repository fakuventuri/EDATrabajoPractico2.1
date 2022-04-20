#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int valNum;
    int factorial = 1;
    int suma = 0;

    cout << "Ingrese el numero maximo de la suma de factoriales: " << endl;
    cin >> valNum;

    for (int i = 1; i <= valNum; i++)
    {
        factorial = 1;
        for (int j = 1; j <= i; j++)
        {
            factorial *= j;
        }
        suma += factorial;
    }

    cout << "El resultado es: " << suma;
}