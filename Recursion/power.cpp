#include <iostream>
using namespace std;
int RecursivePower(int n, int p)
{
    if(p==0)
    return 1;
    return n*RecursivePower(n,p-1);
}
int main(){
    int n,p;
    cout<<"Enter Number abd it's Power :  ";
    cin>>n>>p;
    cout<<RecursivePower(n,p);
    return 0;
}