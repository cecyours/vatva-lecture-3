#include<iostream.h>
#include<conio.h>
// Single : A -> B
class A{
	public:
	void msg()
	{
		cout<<"Hey i am msg from A via "<<this<<endl;
	}
};

class B:public A{

      public:
      void textshow()
      {
		cout<<"Hey, i am text show from B via "<<this<<endl;
      }
};
void main()
{
 clrscr();
	B b;
	A a;
	cout<<"calling via B :  "<<&b<<endl;
	b.msg();
	b.textshow();

	cout<<"\n\ncallingg via A : "<<&a<<endl;
	a.msg();
  getch();
}