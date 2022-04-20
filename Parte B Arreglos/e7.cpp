#include <iostream>
#include <vector>
#include <conio.h>
#include <limits>

using namespace std;

int main(int argc, char const *argv[])
{

    vector<char> a;
    vector<char> b;
    vector<char> c;
    int totalChars;

    cout << "Cuantos caracteres desea ingresar en el vector A?" << endl;
    cin >> totalChars;
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    cout << "Ingrese " << totalChars << " caracteres: " << endl;
    for (int i = 0; i < totalChars; i++)
    {
        cout << "'";
        char temp = getch();
        a.push_back(temp);
        cout << temp << "' ";
    }

    cout << endl
         << "Cuantos caracteres desea ingresar en el vector B?" << endl;
    cin >> totalChars;
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    cout << "Ingrese " << totalChars << " caracteres: " << endl;
    for (int i = 0; i < totalChars; i++)
    {
        cout << "'";
        char temp = getch();
        b.push_back(temp);
        cout << temp << "' ";
    }

    c.reserve(a.size() + b.size());
    c.insert(c.end(), a.begin(), a.end());
    c.insert(c.end(), b.begin(), b.end());

    cout << endl
         << "Vector resultante: "
         << endl
         << "[ ";
    for (char ch : c)
    {
        cout << " '" << ch << "' ";
    }
    cout << "]";
}
