#include<iostream.h>
#include<conio.h>
class demo1;
class demo
{
private:
	 int a;
public:
	 demo();
	 void friend put(demo d,demo1 d1);
};
class demo1
{
private:
	int b;
public:
	demo1();
	void friend put(demo d,demo1 d1);
};
demo::demo()
{
a=7;
}
demo1::demo1()
{

b=10;
}
void put(demo d,demo1 d1)
{
cout<<"value of a is:-"<<d.a<<endl;
cout<<"value of b is:-"<<d1.b;
}
void main()
{
demo a;
demo1 b;
put(a,b);
getch();
}
