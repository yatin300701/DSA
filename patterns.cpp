#include<iostream>
using namespace std;
class b;
class a
{
	public:
		int c;
		void getc()
		{
			c=5;
		}
		int returnc()
		{
			return c;
		}
};
class b : private a
{
	public:
		int d;
		void getd()
		{
			d=4;
		}
		void mul()
		{
			getc();
			cout<<"mul = "<<d*returnc();
		}
};
int main()
{
	b e;
//	e.getc();
	e.getd();
	e.mul();
}
