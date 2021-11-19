#include<bits/stdc++.h>
using namespace std;
 long int XOR(long int C)
{
 long long int d;
 long int  k,max=1;
 int i,j;
d=sqrt(C);
d=d+1;
d=pow(d,2);
for(i=1;i<d;i++)
{
	for(j=2;j<=d;j++)
	{
		k=i^j;
		if(k==C)
		{
			int mul=i*j;
			if(max<mul)
			max=mul;
			mul=max;
		}
	}
}
return max;
}
int main()
{
int T,i;
long int C;
cin>>T;
for(i=0;i<T;i++)
{
scanf("%ld",&C);
printf("%ld\n",XOR(C));
}
return 0;
}