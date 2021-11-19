#include <iostream>
#include <string>
#include<sstream>
using namespace std;

int main() {
  string t,hr,tm,mm,ss;
  getline (cin, t);
  hr=t.substr(0,2);
  mm=t.substr(3,2);
  ss=t.substr(6,2);
  tm=t.substr(8,2);
  int h=stoi(hr);
  if(tm=="AM")
  {
   if(h==12&&tm=="AM")
   hr="00";
  cout<<hr<<':'<<mm<<':'<<ss;
  }
  if(tm=="PM")
  {
  if(h==12)
  {
  cout <<h<<':'<<mm<<':'<<ss;
  }
  if(h!=12)
  {
  h+=12;
  cout <<h<<':'<<mm<<':'<<ss;
  }
  }
  return 0;
}
