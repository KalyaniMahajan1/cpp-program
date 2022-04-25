
#include<iostream.h>
#include<conio.h>
class a
{
 private:
	 int x;
 public:
	 void getx();
 };
 class b:public a
 {
  private:
	 int y;
  public:
	 void gety();
 };
 void a::getx()
 {
 cout<<"enter value of x";
 cin>>x;
 }
 void b::gety()
 {
 cout<<"enter value of y";
 cin>>y;
 }
 main()
 {
   b b1;
   b1.getx();
   b1.gety();
 }
