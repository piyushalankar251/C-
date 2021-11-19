#include<iostream>
using namespace std;
int fact(int n){
if(n <= 1)
return n;
return n*fact(n-1);
}
int main()
{
    cout<<"Enter number : ";
    int n;
    cin>>n;
    cout<<"Factorial : "<<fact(n);
    return 0;
}