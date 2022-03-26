#include <bits/stdc++.h>
using namespace std;
string strReverse(string s)
{
    if (s == "")
        return "";
    else
        return s[s.length() - 1] + strReverse(s.erase(s.length() - 1));
}
int main()
{
    string s;
    cin >> s;
    cout << s[s.length() - 1] + strReverse(s);
}