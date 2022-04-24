#include<iostream.h>
#include<conio.h>

class function
{
    private:
	 int a,b;
	 double l,s,m;

   public:
	void add(int x,int y);
	void add(double l,double s,double m);
};

void function::add(int x,int y)
{
      a=x;
      b=y;
     cout<<"a+b= "<<a+b;

}
void function::add(double x,double y,double z)
{
      l=x;
      s=y;
      m=z;
     cout<<"l+s+m= "<<l+s+m;

}

void main()
{
   clrscr();

   function f;
   f.add(10,20);
   f.add(10,20,30);

  getch();

}