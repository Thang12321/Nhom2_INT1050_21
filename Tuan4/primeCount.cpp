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
    int n, count1 = 0, count2 = 0;
    // n = 443
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (checkPrime(i) == true)
        {
            count1++;
        }
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (checkPrime(i) == true)
        {
            count2++;
        }
    }
    cout << "Phuong phap 2: " << count1 << endl;
    cout << "Phuong phap 3: " << count2 << endl;
}
