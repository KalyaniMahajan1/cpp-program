
#include<iostream.h>
#include<conio.h>
class student
{
protected:
	  int rollno;
	  char name[15];
};
class mark:public student
{
protected:
	 int m1,m2;
};
class sport
{
public:
	 int smarks;
};
class result:public mark,public sport
{
private:
	int total;
public:
	void getdata();
	void display();
};
void result::getdata()
{
cout<<"enter roll number";
cin>>rollno;
cout<<"enter name";
cin>>name;
cout<<"enter marks of 1st sub";
cin>>m1;
cout<<"enter marks of 2nd sub";
cin>>m2;
cout<<"enter sport marks";
cin>>smarks;
}
void result::display()
{
cout<<"roll number of student is:-"<<rollno<<endl;
cout<<"name of student is:-"<<name;
cout<<"marks of 1st sub is:-"<<m1<<endl;
cout<<"marks of 2nd sub is:-"<<m2<<endl;
cout<<"sports marks are"<<smarks;
total=m1+m2+smarks;
cout<<"total marks are:-"<<total;
}
main()
{
result s1;
s1.getdata();
s1.display();
}


