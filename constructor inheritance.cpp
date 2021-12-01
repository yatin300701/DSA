#include<iostream>
using namespace std;
class a
{
	int x;
	public :
		 a(int j)
		{
			x=j;
			cout<<"initialised a"<<endl;
		}
		void aprint()
		{
			cout<<"x is : "<<x<<endl;
		}
};
class b
{
	int y;
	public :
	    b(int f)
		{
			y=f;
			cout<<"initialised b"<<endl;
		}
		void yprint()
		{
			cout<<"y is : "<<y<<endl;
		}
};
class c : public a,public b
{
	int z;
	public :
	    c(int e,int f,int j):b(f),a( j)
		{
			z=e;
			cout<<"initialised c"<<endl;
		}
		void cprint()
		{
			cout<<"c is : "<<z<<endl;
		}
};
int main()
{
	c one(1,2,3);

	one.aprint();
	one.yprint();
	one.cprint();
}
