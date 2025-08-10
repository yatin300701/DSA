#include<iostream>
using namespace std;
class student
{
	protected:
	         int roll_no;
	public:
	         void get_roll()
			 {
			 	cout<<"type roll no : "<<endl;
			 	cin>>roll_no;
			  } 
			  void put_roll()
			  {
			  	cout<<"roll no is : "<<roll_no<<endl;
			  }
			  
};
class test : public student 
{
	protected :
		int maths;
		int physics;
	public :
		void get_marks()
		{
			cout<<"maths marks : "<<endl;
			cin>>maths;
			cout<<"physics marks : "<<endl;
			cin>>physics;
			
		}
		void put_marks()
		{
			cout<<"maths : "<<maths<<endl;
			cout<<"physics : "<<physics<<endl;
		}
};
class sports 
{
	protected:
		int score;
	public:
		void get_score()
		{
			cout<<"type score"<<endl;
			cin>>score;
		}
		void put_score()
		{
			cout<<"score : "<<score<<endl;
		}
};
class result : public test , public sports  
{
  
  private:
  	//int total;
  	int total;
	
	public:
        
		void display()
		{
			put_roll();
			put_marks();
			put_score();
		    total=score+physics+maths;
			cout<<"total : "<<total;
		}
};
int main()
{ 
	result st;
	st.get_roll();
	st.get_marks();
	st.get_score();

	st.display();
}
