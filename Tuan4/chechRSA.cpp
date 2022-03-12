#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i < 1000; i++)
    {
        double k = (double)(9 * i - 1) / 160;
        int kt = (9 * i - 1) / 160;
        double kiemtra = (double)kt;
        if (abs(kiemtra - k) <= 0.0000001)
        {
            cout << i;
            return 0;
        }
    }
}