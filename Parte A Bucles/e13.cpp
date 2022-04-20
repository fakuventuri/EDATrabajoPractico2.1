#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int valNum;

    int fibA = 1;
    int fibB = 1;

    int temp = 0;

    cout << "Ingrese el numero maximo: " << endl;

    cin >> valNum;

    cout << "Serie Fibonacci:" << endl;

    while (fibA <= valNum)
    {
        cout << fibA << endl;
        temp = fibA + fibB;
        fibA = fibB;
        fibB = temp;
    }

    // for (int i = 1; i <= valNum; i++)
    // {
    //     cout << fibA << endl;
    //     temp = fibA + fibB;
    //     fibA = fibB;
    //     fibB = temp;
    // }
}
