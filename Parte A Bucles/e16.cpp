#include <iostream>
#include <vector>

using namespace std;

void imprimirVector(vector<int> vec)
{
    cout << "[ " << vec[0];
    for (int i = 1; i < vec.size(); i++)
    {
        cout << ", " << vec[i];
    }
    cout << " ]" << endl;
}

int main(int argc, char const *argv[])
{

    int V[20] = {};
    vector<int> negativos;
    vector<int> positivos;

    // Rellenando V
    for (int i = -10; i < 10; i++)
    {
        V[i + 10] = i;
    }

    for (int i = 0; i < 20; i++)
    {
        if (V[i] < 0)
        {
            negativos.push_back(V[i]);
        }
        else
        {
            positivos.push_back(V[i]);
        }
    }

    cout << "Positivos: ";
    imprimirVector(positivos);
    cout << "Negativos: ";
    imprimirVector(negativos);
}
