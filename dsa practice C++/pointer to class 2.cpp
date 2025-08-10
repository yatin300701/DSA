#include<iostream>
using namespace std;
class accout
{
  int balance;
public:
  accout(int a)
  {
     balance=a;
  }
  virtual void printbalance()
  {
    cout<<" balance ="<<balance<<endl;
  }
  virtual void getprint()
  {
  	cout<<"you got your balance";
  }
  
};
class checkin : public accout
{
public:
  checkin(int a):accout(a)
  {
     
  }
  void printbalance()
  {
    cout<<"balance 2 "<<endl;
  }
  
};
class saving:public accout
{
 
public:
  saving(int a):accout(a)
  {
  
  }  
  void printbalance()
  {
  	cout<<"balance 3 "<<endl;
  }
};
int main()
{
     accout *a;    //pointer
     saving b(100);
     checkin c(1000);
     a=&b;
     a->printbalance();
     a=&c;
     a->printbalance();
     
}
