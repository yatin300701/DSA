#include<iostream>
using namespace std;
class a
{
	int x;
	public:
		void getData()
		{
			cin>>x;
		}
		void operator ++()
		{
			x++;
		}
		void operator ++(int)
		{
			++x;
		}
		void putData()
		{
			cout<<x<<endl;
		}
};
int main()
{
	a a1;
//	cout<<"type data"<<endl;
	a1.getData();
//	cout<<"you wrote "<<endl;
	a1.putData();
	++a1;
//	cout<<"after pre++"<<endl;
	a1.putData();
	a1++;
//	cout<<"after post++"<<endl;
	a1.putData();
	
}
