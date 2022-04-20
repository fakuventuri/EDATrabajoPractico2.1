#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main(int argc, char const *argv[])
{

    vector<int> nums;
    int totalNums;
    int aux;

    cout << "Cuantos numeros desea ingresar?" << endl;
    cin >> totalNums;
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    cout << "Ingrese " << totalNums << " numeros:" << endl;
    for (int i = 0; i < totalNums; i++)
    {
        cin >> aux;
        nums.push_back(aux);
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    int maxVal;

    if (totalNums > 0)
    {
        maxVal = nums[0];
    }
    else
    {
        maxVal = 0;
    }

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] > maxVal)
        {
            maxVal = nums[i];
        }
    }

    cout << "El Mayor elemento del vector es: " << maxVal;
}
