#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{

    vector<int> nums;
    int num;

    do
    {
        num = getch();

        if (num < 48 || num > 57)
        {
            break;
        }
        else
        {
            nums.push_back(num - 48);
        }

    } while (true);

    int resultado = 1;
    for (int x : nums)
    {
        resultado *= x;
    }

    cout << "La multiplicacion acumulada es: " << resultado << endl;
}
