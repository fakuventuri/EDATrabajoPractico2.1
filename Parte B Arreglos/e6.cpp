#include <iostream>
#include <vector>

using namespace std;

int sumarVector(vector<int> vec)
{
    int suma = 0;
    for (int x : vec)
    {
        suma += x;
    }
    return suma;
}

int main(int argc, char const *argv[])
{

    vector<int> nums;

    // Rellenando V
    for (int i = 0; i < 20; i++)
    {
        nums.push_back(i + 1);
    }

    // nums.push_back(sumarVector(nums));

    int suma = sumarVector(nums);
    int numeroBuscado;
    bool modificado = false;

    if (suma % 2 == 0)
    {
        numeroBuscado = suma / 2;
        for (int x : nums)
        {
            if (x == numeroBuscado)
            {
                modificado = true;
                cout << "Si existe.";
                break;
            }
        }
    }
    else
    {
        cout << "No existe. (numero con coma)";
        modificado = true;
    }

    if (!modificado)
    {
        cout << "No existe.";
    }
}
