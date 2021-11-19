#include<iostream>
using namespace std;
class Num
{
	public:
	int num1, num2;
	inline friend int Max_of_two(int , int);
};
int Max_of_two(int a , int b)
{
	if(a>b)
	return a;
	if(a<b)
	return b;
	else
	return 0;
}
int main()
{
	Num data;
	cout<< "Enter Two numbers :"<<endl;
	cin>>data.num1>>data.num2;
	cout<<"MAx of two is : "<<Max_of_two(data.num1,data.num2);
	return 0;
}
