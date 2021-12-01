#include<bits/stdc++.h>
using namespace std;
class a
{
	int x;
	public:
		void getData()
		{
			cout<<"type value of x"<<endl;
			cin>>x;
		}
		void operator ++()
		{
		   a=++a;
			
		}
			void operator ++(int )
		{
		   a=a++;
			
        }
		void display()
		{
			cout<<x<<endl;
		}
};
int main()
{
     a a1;
	 a1.getData();
	 a1.display();
	 ++a1;
	 a1.display();
	 a1++;
	 a1.display();	
}
