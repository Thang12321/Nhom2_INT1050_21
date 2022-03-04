#include <iostream>
using namespace std;
void Binary_InsertionSort(int n, int arr[])
{
    for (int j = 2; j <= n; j++)
    {
        int trai = 0;
        int phai = j - 1;
        int giua;
        while (trai <= phai)
        {
            giua = (trai + phai) / 2;

            if (arr[j] < arr[giua])
                phai = giua - 1;
            else
                trai = giua + 1;
        }
        int m = arr[j];
        for (int k = 0; k < j - trai; k++)
            arr[j - k] = arr[j - k - 1];
        arr[trai] = m;
    }
}
int main()
{
   /*  
    int test[]={1,5,3,6,2,9,7,10,2,87,1,23};
    Binary_InsertionSort(12,test);
    for(int i=0;i<12;i++) cout<<test[i]<<" "; 
     */
}