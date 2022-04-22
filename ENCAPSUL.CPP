#include<iostream.h>
#include<conio.h>
class student
{
private:
	 int rollno,m1,m2,total;
	 char name[20];
public:
	 void get();
	 void put();
};
void student::get()
{
cout<<"enter roll number:-";
cin>>rollno;
cout<<"enter name:-";
cin>>name;
cout<<"enter marks of frist subject:-";
cin>>m1;
cout<<"enter marks of second subject:-";
cin>>m2;
}
void student::put()
{
total=0;
total=m1+m2;
cout<<"\n roll number=>\t";
cout<<rollno;
cout<<"\n name=>  \t";
cout<<name;
cout<<"\n marks of frist subject=>";
cout<<m1;
cout<<"\n marks of second subject=>";
cout<<m2;
cout<<"\n total marks=>";
cout<<total;
}
void main()
{
clrscr();
student s;
s.get();
s.put();
getch();
}
