#include <bits/stdc++.h>
using namespace std;
int m(string s)
{
    /*   if (s == "")
          return minval;
      else return m(s.erase(s.length()-1),min(minval,(int)s[s.length()-1]-'0'));
      */
    if (s == "")
        return 9;
    else
        return min(m(s.erase(s.length() - 1)), s[s.length() - 1] - '0');
}
int main()
{
    string s;
    cin >> s;
    cout << m(s);
}