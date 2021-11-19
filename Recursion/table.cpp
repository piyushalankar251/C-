#include<iostream>
using namespace std;
int tab(int n){
int k=1,ans;
if(k>=10)
return 10;
cout<<n;
n*=tab(k+1);
return n;



}
int main(){
    cout<<"Enter value : ";
    int n;
    cin>>n;
    cout<<tab(n);
    return 0;
}