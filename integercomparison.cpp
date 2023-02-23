#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter Your First Integer: ";
    cin >> num1;

    cout << "Enter Your Second Integer: ";
    cin >> num2;

    if (num1 > num2)
    {
        cout << "The first integer is greater." << endl;
    }
    else if (num2 > num1)
    {
        cout << "The second integer is greater." << endl;
    }
    else
    {
        cout << "Both integers are equal." << endl;
    }

    return 0;
}
