#include<iostream>
using namespace std;
class a
{
	
	public :
		int x;
		a()
		{
			x=10;
		}
		
};
class b: public a
{
	public:
	   void inre()
	   {
	   	x++;
	   }
	
};
class c:public b
{
	public:
	
		void display()
		{
			cout<<x;
		}
};
int main()
{
	c c1;
	c1.inre();
	c1.display();
}
