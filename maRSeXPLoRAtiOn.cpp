#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'marsExploration' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int marsExploration(string s) {
int n=s.length(),count=0,M;
string sos="SOS";
for(int i=0;i<n;i+=3)
{
     if(s[i]==sos[0])
     count+=1;
     if(s[i+1]==sos[1])
     count+=1;
     if(s[i+2]==sos[2])
     count+=1;
}
return abs(n-count);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
