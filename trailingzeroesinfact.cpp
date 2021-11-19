#include <iostream>
using namespace std;
int Ans(long long N)
{
	int i;
	long long int count=0;
    for(i=5;N/i>=1;i*=5)
    {
    	count+=N/i;
	}
	cout<<count<<endl;
  return 0;
}
int main() {
	long long int N,Fact=1;
	int i,j,T;
	cin>>T;
	for(i=0;i<T;i++)
	{
	    cin>>N;
	    Ans(N);
	   //cout<<Fact<<endl;
	}
	return 0;
}
