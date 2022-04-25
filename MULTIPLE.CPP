#include<iostream.h>
#include<conio.h>
class a
{
private:
	 int a;
public:
       void display();
};
class b
{
private:
	 int b;
public:
       void display();
};
class c:public a,public b
{
private:
	int c;
public:
      void display();
};
void a::display()
{
   cout<<"dislpay a";

}
void b::display()
{
   cout<<"dislpay a";

}
void c::display()
{
   cout<<"dislpay a";

}


 void main()
{
clrscr();

c x;
x.display();
x.display();
x.display();
getch();
}
