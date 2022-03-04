#include <iostream>
using namespace std;
int ternary_search(int trai, int phai, int socantim, int arr[])
{
    if (phai >= trai)
    {
        int giua_trai = trai + (phai - trai) / 3;
        int giua_phai = phai - (phai - trai) / 3;
        if (arr[giua_trai] == socantim)
            return giua_trai;
        if (arr[giua_phai] == socantim)
            return giua_phai;
        if (socantim < arr[giua_trai])
        {
            return ternary_search(trai, giua_trai - 1, socantim, arr);
        }
        else
        {
            if (socantim > arr[giua_phai]){
                return ternary_search(giua_phai + 1, phai, socantim, arr);
            }
            else return ternary_search(giua_trai + 1, giua_phai - 1, socantim, arr);
        }
       
    }
    return -1;
}
int main()
{
    
/*   
    int test[]={1,3,4,5,7,9,10,12};
    cout<<ternary_search(0,7,10,test); */
    
}