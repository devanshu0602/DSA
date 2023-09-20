#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int answer = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;

        answer = answer + (bit * pow(10, i));

        n = n >> 1; // Right-shift (or) divide by 10
        i++;
    }

    cout << "=> Binary = " << answer;

    return 0;
}