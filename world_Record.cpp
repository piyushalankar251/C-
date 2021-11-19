#include <bits/stdc++.h>
using namespace std;

int main() {
	long int T;
	cin>>T;
	double k1,k2,k3,v,temp;
	long ans;
	for(int i=0;i<T;i++)
	{
	    cin>>k1>>k2>>k3>>v;
	    k1=k1*k2*k3*v;
	    k2=100/k1;
	    temp=k2*100;
	    ans=round(temp);
	    if(ans<958)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
