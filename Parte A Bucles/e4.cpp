#include <iostream>
#include <limits>

using namespace std;

int main(int argc, char const *argv[])
{
    int cant = 0;
    double suma = 0;
    double ingresado;

    cout << "Ingrese la temperatura: " << endl;
    cin >> ingresado;
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cant++;
    suma += ingresado;
    double max = ingresado;
    double min = ingresado;

    for (int i = 4; i < 24; i += 4)
    {
        cout << "Ingrese la temperatura: " << endl;
        cin >> ingresado;
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cant++;
        suma += ingresado;
        if (ingresado > max)
        {
            max = ingresado;
        }
        if (ingresado < min)
        {
            min = ingresado;
        }
    }

    cout << "Temperatura media: " << suma / cant << endl;
    cout << "Temperatura mas alta: " << max << endl;
    cout << "Temperatura mas baja: " << min << endl;

    return 0;
}
