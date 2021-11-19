#include <iostream>
using namespace std;
     void printArrayRecursively(int arr[],int n)
    {
     int index=n-1;
     if(n==0)
     {
     return;
     }
      
     printArrayRecursively( arr, n-1);
     cout<<arr[index]<<" ";
    
    }
    int main(){
        int n;
        cout<<"Enter Array Size : ";
        cin>>n;
        int arr[100000];
        cout<<"Enter Array : ";
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
         printArrayRecursively( arr, n);
    }