
#include<iostream.h>
#include<conio.h>
class student
{
protected:
	   int rollno;
	   char name[20];
public:
	  void get();
	  void put();
};
class marks:public student
{
protected:
       int m1,m2;
public:
       void getmarks();
       void putmarks();
};
class result:public marks
{
private:
	 int total;
public:
	 void display();

};
void student::get()
{
cout<<"enter the rollno";
cin>>rollno;
cout<<"enter the name";
cin>>name;
}
void student::put()
{
cout<<"student rollno is:-"<<rollno<<endl;
cout<<"student name is:-"<<name;
}
void marks::getmarks()
{
get();
cout<<"enter marks of 1st sub:-";
cin>>m1;
cout<<"enter marks of 2nd sub:-";
cin>>m2;
}
void marks::putmarks()
{
put();
cout<<"marks of 1st sub:-"<<m1<<endl;
cout<<"marks of 2nd sub:-"<<m2;
}
void result::display()
{
getmarks();
putmarks();
total=m1+m2;
cout<<"total is"<<total<<endl;
}
main()
{
clrscr();
result R;
R.display();
getch();
}





