#include<iostream.h>
#include<conio.h>

class A{
	private:
	int value;

	public:
	void setData(int v)
	{
	   value = v;
	}

	int getData()
	{
	   return value;
	}
};

void main()
{
	A object1,object2;
clrscr();
	object1.setData(100);
	object2.setData(290);

	cout<<" the value => "<<object1.getData()<<endl;
	cout<<" the value => "<<object2.getData()<<endl;

getch();
}