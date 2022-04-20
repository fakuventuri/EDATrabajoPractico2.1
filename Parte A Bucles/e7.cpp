#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int maxNum;
    int sum = 0;
    int iterable = 1;

    cout << "Ingrese el numero maximo de la sumatoria: " << endl;

    cin >> maxNum;

    while (iterable <= maxNum)
    {
        sum += iterable;
        iterable++;
    }

    cout << "Resultado con while: " << sum << endl;

    sum = 0;

    for (int i = 1; i <= (2 * maxNum) - 1; i += 2)
    {
        sum += i;
    }

    cout << "Resultado con for: " << sum;
}
