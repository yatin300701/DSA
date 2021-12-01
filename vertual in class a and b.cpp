#include<iostream>
using namespace std;
class a
{
	public :
		virtual void print()
		{
			cout<<"helo";
		}
};
class b:public a
{
     void print()
	{
		cout<<"bye";
	}
};
int main()
{
	a *c;
	b obj;
	c=&obj;
	c->print();
}
