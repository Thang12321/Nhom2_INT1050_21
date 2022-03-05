#include <iostream>
using namespace std;
int count_Binary=0;
int count_NonBinary=0;
void Binary_InsertionSort(int n, int arr[])
{
    for (int j = 1; j < n; j++)
    {
        int trai = 0;
        int phai = j - 1;
        int giua;   
        while (trai <= phai)
        {
            count_Binary ++;
            giua = (trai + phai) / 2;
            
            if (arr[j] < arr[giua])
                {
                phai = giua - 1;
                count_Binary ++;
                }
            else{
                trai = giua + 1;
                count_Binary ++;
            }
                
        } 
        count_Binary ++;
        int m = arr[j];
        for (int k = 0; k < j - trai; k++)
            arr[j - k] = arr[j - k - 1];
        arr[trai] = m;
    }
}
void insertionSort(int n, int arr[])
{
    for (int j = 1; j < n; j++)
    {
      int i=0;
      while (arr[j]>arr[i])
      {
        i++;
        count_NonBinary ++;
      }
      count_NonBinary ++;
        int m = arr[j];
        for (int k = 0; k < j - i; k++)
            arr[j - k] = arr[j - k - 1];
        arr[i] = m;
    }
}

int main()
{
    // Vì phần dịch vị trí của 2 cách và chạy vòng for j là giống nhau nên sẽ không tính những phép so sánh trong 2 vòng for này
    // 2 cách làm chỉ khác nhau phần tìm vị trí cần chèn
    int test[]={7, 4, 3, 8, 1, 5, 4, 2};
    int test2[]={7, 4, 3, 8, 1, 5, 4, 2};
   /*  int test3[]={1,2,3,4,5,6,7,8};
    int test4[]={1,2,3,4,5,6,7,8};
     */
    Binary_InsertionSort(8,test);
    for(int i=0;i<8;i++) cout<<test[i]<<" "; 
    cout<<endl<<"So lan nhi phan: "<<count_Binary<<endl;
    insertionSort(8,test2);
    for(int i=0;i<8;i++) cout<<test2[i]<<" "; 
    cout<<endl<<"So lan khong nhi phan: "<<count_NonBinary<<endl;
     
}