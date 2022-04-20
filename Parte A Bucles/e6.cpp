#include <iostream>
#include <limits>

using namespace std;

int main(int argc, char const *argv[])
{
    int x;
    int y;

    cout << "Ingrese x: " << endl;
    cin >> x;

    cout << "Ingrese y: " << endl;
    cin >> y;

    int result = x;

    for (int i = 1; i < y; i++)
    {
        result *= x;
    }

    cout << "El resultado de: " << x << "^" << y << " Es: " << result;
}