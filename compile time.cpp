#include<iostream>
using namespace std;
class student
{

  public:
  	
  	void display()
  	{
  		cout<<"student worked"<<endl;
  	}
};
class result:public student
{
public:
	void display()
	{
		cout<<"result worked"<<endl;
	}
	
};
int main()
{
    student *a;
    result b;
    a=&b;
    a->display();
	
	return 0;
}
