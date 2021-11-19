#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> v;
    int x,i,N;
    cin>>N;
    for(i=0;i<N;i++)
    {
    cin>>x;
    v.push_back(x);
    }
    sort(v.begin(),v.end());  
    for(i=0;i<N;i++)
    cout<<v[i]<<" ";
    return 0;
}
