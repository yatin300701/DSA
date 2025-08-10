#include<bits/stdc++.h>
using namespace std;
class grandparent
{
	public:
		void print()
		{
			cout<<"hello";
		}
};
class father:virtual public grandparent
{
	
};
class mother:virtual public grandparent
{
	
};
class child:public mother,public father
{
	
};


int main()
{
	child ch1;
	ch1.print();
	
}
