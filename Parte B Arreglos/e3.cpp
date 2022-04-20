#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main(int argc, char const *argv[])
{

    vector<int> nums(100);
    int totalNums;

    cout << "Cuantos numeros desea ingresar? (max 100)" << endl;
    cin >> totalNums;
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    cout << "Ingrese " << totalNums << " numeros: " << endl;
    for (int i = 0; i < totalNums && i < 100; i++)
    {
        cin >> nums[i];
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    for (int i = 0; i < totalNums; i++)
    {
        cout << "[" << i << "]"
             << " = " << nums[i] << "  ";
    }
}
