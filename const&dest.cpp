#include<iostream>
using namespace std;
class NUMBER
{
	public:
	NUMBER(int NUM)
	{
		int i,count=0;
		for(i=1;i<=NUM;i++)
		{
			if(NUM%i==0)
			{
				count+=1;
			}
		}
		if(count==2)
		cout<<"YES"<<" "<<NUM<<" "<<"is PRIME";
		else
		cout<<"NO"<<" "<<NUM<<" "<<"is not PRIME";
	}
	~NUMBER()
	{
		cout<<endl<<"THE OBJECT IS NOW BEING DESTROYED....................!!!!!!!!!!!!!!";
	}
};
int main()
{
	int NUM;
	cin>>NUM;
	NUMBER N(NUM);
	return 0;
}