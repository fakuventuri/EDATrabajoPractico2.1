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

    int suma = 0;
    for (int x : nums)
    {
        suma += x;
    }

    cout << "La suma es: " << suma << endl;
}
