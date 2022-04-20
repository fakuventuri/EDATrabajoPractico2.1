#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> A;
    // Rellenando A en orden
    for (int i = 0; i < 100; i++)
    {
        A.push_back(i + 1);
    }

    // Aux para comprobar, bool ordenado para retornar.
    int aux = A[0];
    bool ordenado = true;

    // Iterando para comprobar
    for (int i = 1; i < 100; i++)
    {
        if (aux >= A[i])
        {
            ordenado = false;
            break;
        }
        aux = A[i];
    }

    // imprimiento respuesta
    if (ordenado)
    {
        cout << "SI";
    }
    else
    {
        cout << "NO";
    }
}