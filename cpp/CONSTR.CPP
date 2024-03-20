#include<iostream.h>
#include<conio.h>
class A{
	public:
		int x;

		A() // default Constructor
		{
		  x=0;
		  cout<<"i am in A default "<<this<<" with value "<<x<<endl;
		}

		A(int  x)
		{
		   this->x = x;
		   cout<<"i am in A parameterized.."<<this<<" with value "<<x<<endl;
		}

		A (A *temp)
		{
		 this->x = temp->x;
		  cout<<"i am copy constructor.. "<<this<<" with value "<<x<<endl;
		}


		~A()
		{
			x = NULL;
			cout<<"good bye boy!! "<<x<<endl;
		}

		void display()
		{
			cout<<"i am calling via "<<this<<endl;
		}

};

void main()
{
clrscr();
	A obj1(5),obj2(300),obj3; // call
	A obj4(&obj2);

	cout<<"my name "<<&obj1<<endl;


getch();
}