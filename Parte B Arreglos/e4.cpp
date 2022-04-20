#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{

    vector<int> nums;

    // Rellenando V
    for (int i = 0; i < 20; i++)
    {
        nums.push_back(i + 1);
    }

    cout << "Orden normal: " << endl;
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl
         << "Orden inverso: " << endl;
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        cout << nums[i] << " ";
    }
}
