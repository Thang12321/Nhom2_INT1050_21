#include <bits/stdc++.h>
using namespace std;
void timngoac(int n, int bac,  vector <string> & bList)
{
    if(n==0) return;
    vector <string> hientai;
    for(int i=0;i<bList.size();i++)
    {
        if(bList.at(i).length()==bac*2) hientai.push_back(bList.at(i));
    }
    for(int i=0;i<hientai.size();i++)
    {   
        string kieu1 = '('+hientai.at(i)+')';
        string kieu2 = hientai.at(i)+"()";
        string kieu3 = "()"+hientai.at(i);
        bList.push_back(kieu1);
        if(kieu1!=kieu2&&kieu2!=kieu3) bList.push_back(kieu2);
        if(kieu3!=kieu1&&kieu2!=kieu3) bList.push_back(kieu3);
        if(kieu2==kieu3&&kieu1!=kieu2) bList.push_back(kieu2);
    }
    timngoac(n-1,bac+1,bList);
}
int main()
{
    vector <string> bList;
    bList.push_back("");
   int n;
   cin>>n;
    timngoac(n/2,0,bList);
    for(int i=1;i<bList.size();i++)
    cout<<bList.at(i)<<endl;
}