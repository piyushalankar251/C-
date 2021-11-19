#include<bits/stdc++.h>
using namespace std;
class Data
{
	protected:
	int height,breadth;
	public:
	inline int getdata()
	{
		cin>>height>>breadth;
		return 0;
	}
	inline void show_data()
	{
		cout<<"height = "<<height<<" breadth = "<<breadth<<endl;
	}
};
class Rectangle : public Data
{
	public:
	inline void areaRectangle()
	{
	cout<<"area ="<<height*breadth<<endl;
	}
	inline void perimeterRectangle()
	{
		cout<<"perimeter = "<<2*(height+breadth);
	}
};
class Triangle:public Data
{
	public:
 inline void areaTriangle()
 {
 	cout<<"area = "<<0.5*height*breadth<<endl;
 }
 void perimeterTriangle()
 {
 	int a;
 	cin>>a;
 	cout<<"perimeter = "<<a+height+breadth<<endl;
 }
};
int main()
{
	Rectangle r;
	Triangle t;
	Data d;
	r.getdata();
	r.show_data();
	r.areaRectangle();
	r.perimeterRectangle();
	t.getdata();
	t.show_data();
	t.areaTriangle();
	t.perimeterTriangle();
	return 0;
}