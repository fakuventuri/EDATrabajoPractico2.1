#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int valNum;
    int factorial = 1;

    cout << "Ingrese el numero al que calcular factorial: " << endl;

    cin >> valNum;

    for (int i = 1; i <= valNum; i++)
    {
        factorial *= i;
    }

    cout << "El resultado es: " << factorial;
}
