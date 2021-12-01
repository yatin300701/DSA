#include<iostream>
using namespace std;
class a
{
	public:
		static int x;
		void display()
		{
			cout<<"x = "<<x<<endl;
		}
};
int a :: x =0;
int main()
{
	a a1;
	a1.display();
	return 0;
	
}
