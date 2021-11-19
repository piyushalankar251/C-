#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> v;
    int a,b,i,n,N,x;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>N;
        v.push_back(N);
    }  
    cin>>x;
    cin>>a>>b;
    v.erase(v.begin()+x-1);
    v.erase(v.begin()+a-1,v.begin()+b-1);
    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    return 0;
}
