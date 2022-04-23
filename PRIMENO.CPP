#include<iostream.h>
#include<conio.h>
class test
{
public:
	int i,n,c;
	void read();
	void display();
};
void test::read()
{
cout<<"enter the number";
cin>>n;
c=0;
}
void test::display()
{
for(i=0;i<=n/2;i++)
{
if(n%i==0)
{
c=c+1;
}
}
if(c==0)
{
cout<<"number is prime";
}
else
{
cout<<"number is not prime";
}
}
void main()
{
clrscr();
test t1;
t1.read();
t1.display();
getch();
}
