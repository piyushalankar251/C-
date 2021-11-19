#include <iostream>
using namespace std;

int main() {
	int T,x1,x2,X1,X2;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
	    cin>>x1>>x2>>X1>>X2;
	    X1/=x1;
	    X2/=x2;
	    cout<<X1+X2<<endl;
	}
	return 0;
}
