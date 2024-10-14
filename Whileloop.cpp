#include <iostream>
using namespace std;

int main()
{
    string name;
    while (name.empty())
    {
        cout << "Enter your name:- \n";
        getline(cin, name);
    }
    /* while (1 == 1)
    {
        cout << "HELP, I am stuck in this while loop";
    } */
    cout << "Hello " << name << "\n";
}