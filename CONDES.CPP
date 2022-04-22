#include<iostream.h>
#include<conio.h>
class demo
{
private:
	 int a,b;
public:
	 demo();
	~ demo();
	void show();
};
demo::demo()
{
cout<<"constuctor called";
}
void demo::show()
{
cout<<a<<endl;
cout<<b;
}
demo::~demo()
{
cout<<"destructor called";
}
main()
{
clrscr();
demo d1;
d1.show();
getch();
}

