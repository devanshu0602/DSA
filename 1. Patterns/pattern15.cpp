/*
If n = 4, then the pattern is:

A
B C
D E F
G H I J
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int i = 1, count = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            char ch = 'A' + count - 1;
            cout << ch << " ";
            j++;
            count++;
        }
        cout << endl;
        i++;
    }

    return 0;
}