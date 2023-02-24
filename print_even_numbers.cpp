#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter a Your integer: ";
    cin >> n;

    cout << "Lets Print Even numbers from 0 to " << n << ":" << endl;
    for (int i = 0; i <= n; i += 2)
    {
        cout << i << endl;
    }

    return 0;
}