#include<iostream.h>
#include<conio.h>
class demo
{
private:
	int a,b;
public:
	void show();
	demo(int x,int y);
	demo(demo & ref);
};
demo::demo(int x,int y)
{
a=x;
b=y;
}
demo::demo(demo & ref)
{
a=ref.a;
b=ref.b;
}
void demo::show()
{
cout<<"enter value of a"<<endl;
cout<<"enter value of b";
}
main()
{
clrscr();
demo obj1(10,20);
demo obj2=obj1;
obj2.show();
getch();
}
