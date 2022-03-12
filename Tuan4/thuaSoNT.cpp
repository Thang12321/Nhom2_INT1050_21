#include <iostream>
#include <math.h>
using namespace std;

bool checkPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    int n;
    cin >> n;
    cout << n << " = ";
    for (int i = 2; i <= n; i++)
    {
        if (checkPrime(i) == false)
            continue;
        int count = 0;
        while (n % i == 0)
        {
            count++;
            n /= i;
        }
        if (count != 0)
        {
            cout << i;
            if (count > 1)
                cout << "^" << count;
            if (n > i)
            {
                cout << " x ";
            }
        }
    }
}