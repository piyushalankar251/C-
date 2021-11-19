#include <iostream>
using namespace std;
int fibo(int n)
{
int fib=1,a=0,b;
if(n==0)
cout<<a;
for(int i=0;i<=n;i++){
b=fib + a;
fib=a;
a=b;
if(i==n)
cout<<b<<" ";
}
return 0;
}
int main()
{
cout<<"Enter series length : ";
int n;
cin>>n;
fibo(n);
return 0;
}