#include<iostream>
using namespace std;
class base
{
	
	public:
	    int data_base;
		//void getBaseData();
		int showData_base();
};
class derived:private base
{
	public :
		int data_derived;
		void getDerivedData()
		{
			cin>>data_derived;
		}
		void product()
		{
		//	showData_base();
			cout<<"product of base class data and derived class data is "<<(data_derived*showData_base())<<endl;
		}
};
//void base::getBaseData()
//		{
//			cin>>data_base;
//		}
int base::showData_base()
{
	cin>>data_base;
	return data_base;
}
int main()
{
  // 	base a;
	//a.getBaseData();
	derived b;
	//b.getBaseData();
	b.getDerivedData();
	b.product();
}

