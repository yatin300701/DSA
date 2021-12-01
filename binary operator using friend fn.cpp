#include<iostream>
using namespace std;
class complex
{
	public:
		int x;
		int y;
		complex()
		{
			x=1;
			y=1;
		}
		complex(int a,int b)
		{
			x=a;
			y=b;
		}
		friend complex operator + (complex &c1,complex &c2)
	    {
			complex c;
			c.x=c1.x+c2.x;
			c.y=c1.y+c2.y;
			return c;
		}
		void display()
		{
			cout<<"complex no is  "<<x<<"+i"<<y<<endl;
		}
};
   
	
int main()
{
	complex c1(6,3),c2(3,4);
	complex c3;
	c3=c1+c2;
	c3.display();
}
