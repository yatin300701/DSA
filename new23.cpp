#include<iostream>
using namespace std;
class base
{
public:
   virtual void print();
   
   void show();
   
  
};
void base ::print()
{
    cout<<"base virtual fn printed";
}
void base::show()
{
    cout<<"base non vertual fn printed";
}
class derived:public base
{
public:
  void print()
  {
    cout<<"derived vertual fn printed"<<endl;
  }
  void show()
  {
    cout<<"derived non vertual fn printed"<<endl;
  }
};
int main()
{
  derived a;
  derived *b;
  base *c;
  b=&a;
  c=&a;
b->print();
b->show();
c->print();
c->show();
}
