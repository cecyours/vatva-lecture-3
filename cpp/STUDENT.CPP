#include<iostream.h>
#include<conio.h>

class Student{
	//properties

	int rollno;
	char name[100];
	float marks;


	public:
	void setData();
	void displayData();


};
void Student::setData()
{
	cout<<"Enter rollno : ";
	cin>>rollno;

	cout<<"Enter name : ";
	cin>>name;

	cout<<"Enter marks : ";
	cin>>marks;
}
void Student::displayData()
{
	cout<<"rollno : "<<rollno<<", name : "<<name<<", marks : "<<marks<<endl;
}
void main()
{
	Student s1;
clrscr();
	s1.display();
	 s1.displayData();
getch();
}