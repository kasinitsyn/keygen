#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int generate_key(string input)
{
    int input_size = input.length();
    int base = 1010;

    for (int i = 0; i < input_size; i++)
    {
        base = base + (int) (char) input[i];
    }

    return base + 1010;
}


int main()
{
    string banlist[7] = {"Kirill", "Alisa", "Renat", "Yura", "Denis", "Alex", "kolyavv"};
    string name;
    cout << "Please, enter name: ";
    getline(cin, name);

    for (int i = 0; i < (sizeof(banlist) / sizeof(banlist[0])); i++)
    {
        if (name == banlist[i])
        {
            cout << "Unfortunately, your name contains in ban list\n";
            return 0;
        }
    }

    cout << "Generated code: " << generate_key(name) << "\n";

    return 0;
}
