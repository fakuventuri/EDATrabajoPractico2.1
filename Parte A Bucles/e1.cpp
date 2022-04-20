#include <iostream>
#include <limits>

using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    bool ask = true;

    do
    {
        cout << "Ingrese un numero del 1 al 10" << endl;
        cin >> num;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (0 < num & num <= 10)
        {
            ask = false;
        }
        else
        {
            cout << "Ingrese un numero correcto." << endl;
        }

    } while (ask);

    for (int i = 0; i <= 10; i++)
    {
        cout << num * i << " ";
    }

    return 0;
}
