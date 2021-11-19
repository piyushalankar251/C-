#include <iostream>
#include <string>
using namespace std;

int main() {
string a,b,c;
char ch;
cin>>a>>b;
int lenA,lenB;
lenA= a.size();
lenB= b.size();
cout<<lenA<<" "<<lenB<<endl;
c=a+b;
cout<<c<<endl;
 ch=b[0];
 b[0]=a[0];
 a[0]=ch;
cout<<a<<" "<<b<<endl;
   
 return 0;
}
