#include<iostream>
using namespace std;
class s
{
	int x;
	public:
		s(int a)
		{
			x=a;
		}
		friend void operator ++(s &a)
		{
			a.x=++a.x;
		}
		friend void operator --(s &a)
		{
			a.x=--a.x;
		}
		void display()
		{
			cout<<x<<endl;
		}
};
int main()
{
	s s1(12);
	s1.display();
	++s1;
	s1.display();
	--s1;
	s1.display();
	
}
