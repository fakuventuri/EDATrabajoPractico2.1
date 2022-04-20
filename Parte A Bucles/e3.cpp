#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int suma;
    int n = 10;

    for (int i = 1; i <= n; i++)
    {
        suma += i * i;
    }

    cout << suma << endl;
    cout << (n * (n + 1) * (2 * n + 1)) / 6;

    return 0;
}
