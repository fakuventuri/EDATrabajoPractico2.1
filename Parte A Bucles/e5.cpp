#include <iostream>
#include <limits>

using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    int sum;

    cout << "Ingrese numeros: " << endl;

    do
    {
        cin >> num;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if (num > 0)
        {
            sum += num;
        }

    } while (num != 0 && (num < 20 || num > 30));

    cout << "La suma es: " << sum;
}