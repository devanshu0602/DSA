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
        int bit = n % 10;
        
        if (bit == 1)
        {
            answer = answer + pow(2, i);
        }

        n = n / 10;
        i++;
    }

    cout << "=> Decimal = " << answer;

    return 0;
}