#include <iostream>
#include <limits>

using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    int count;

    cout << "Ingrese numeros: " << endl;

    do
    {
        cin >> num;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if (num > 0)
        {
            count++;
        }

    } while (num != 0);

    cout << "La cantidad de numeros mayores a cero fue: " << count;
}
