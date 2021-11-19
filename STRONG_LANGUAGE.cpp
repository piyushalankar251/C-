#include <bits/stdc++.h>
#include<string>
using namespace std;

int main() {
	int T;
	long int K,N,count;
	string S;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    cin>>N>>K;
	    getline(cin,S);
	    getline(cin,S);
	    count=0;
	    for(int j=0;j<N;j++)
	    {
	        if(S[j] == '*')
	        {
	            count+=1;
	        }
	        else
	            count=0;
	         if(count==K)
	         break;
	    }
	    if(count==K)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	
	return 0;
}
