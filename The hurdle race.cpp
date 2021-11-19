#include<bits/stdc++.h>
using namespace std;
inline int Ans(int k)
{
    cout<<k;
    return 0;
}
int main()
{
    int n,k,H[1000];
    cin>>n>>k;
    for(int i =0;i<n;i++)
    cin>>H[i];
    sort(H,H+n,greater<int>());
    if(k>=H[0])
   {
     k=0;
    Ans(k);
}
    else
    {
    k=H[0]-k;
    Ans(k);
}
return 0;
}