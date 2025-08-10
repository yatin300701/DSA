#include<iostream>
#include<string>
using namespace std;
template <class T , class V >
void swap(T x ,V y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
void fun(int a ,int b, float c,float d)
{
	swap(a,b);
	swap(c,d);
	cout<<"after swaping a and b = "<<a<<"\t"<<b<<endl;
	cout<<"after swaping c and d = "<<c<<"\t"<<d<<endl;
	}
int main()
{
	int a,b;
	float c,d;
	cout<<"type a,b,c,d"<<endl;
	cin>>a>>b>>c>>d;
	fun(a,b,c,d);
}
