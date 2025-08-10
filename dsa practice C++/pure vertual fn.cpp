#include<iostream>
using namespace std;
class employ
{

  public:
  	
  	virtual int get_salary()=0;
  	
};
class employ_1:public employ
{
	int salary;
public:
	employ_1(int a)
	{
		salary=a;
	}
	int get_salary()
	{
		return salary;
	}
	
};
class employ_2:public employ
{
	int salary;
public:
	employ_2(int a)
	{
		salary=a;
	}
	int get_salary()
	{
		return salary;
	}
	
};
int main()
{
    employ_1 b(1000);
    employ_2 c(1110);
    cout<<b.get_salary()<<endl;
    cout<<c.get_salary()<<endl;
	
	return 0;
}
