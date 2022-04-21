#include<iostream.h>
#include<conio.h>
 class Demo
{
   private:
	 int a;
   public:
	Demo();
	void show();
	~Demo();
}
Demo::Demo()
{   cout<<"constructor is called"<<endl;
    a=5;
}
void Demo::show()
{
  cout<<a<<endl;
}
Demo::~Demo()
{
  cout<<"Destructor is called";
}
void main()
{  clrscr();

   Demo d1;
   d1.show();

   getch();
}