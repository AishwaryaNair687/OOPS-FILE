 #include<iostream>
#include<conio.h>
using namespace std;
class DB;
class DM
{

 public:
 	 float meter,centimetre;
 void print()
 {
  cout<<"\nEnter the distance in metres and centimeters :";
  cin>>meter>>centimetre;
}
void display()
{
  cout<<"\nThe distance is:";
  cout<<meter<<" meters and "<<centimetre<<" centimeter";
 }
 friend void sum(DM ,DB );
};
class DB
{
 public:
 	float inch,feet;
 void print()
 {
  cout<<"\nEnter the distance in feets and inches:";
  cin>>feet>>inch;
 }
 void display()
 {
  cout<<"\nThe distance is:";
  cout<<feet<<" feet and "<<inch<<" inch";
 }
 friend void add(DM ,DB);
};
void sum(DM obj1,DB obj2)
{
 int ch;
 cout<<"\nenter 1 for meter-centi:";
 cout<<"\nenter 2 for feet-inch:";
 cout<<"\nEnter your choice:";
 cin>>ch;
 if(ch==1)
 {
  DM w;
  int c=(obj1.meter*100+obj1.centimetre+obj2.feet*30.48+obj2.inch*2.54);
  if(c>=100)
  {
   w.meter=c/100;
   w.centimetre=c%100;
  }
  else
  {
   w.meter=0;
   w.centimetre=c;
  }
  w.display();
 }
 else
 {
  DB w;
  int i=(obj1.meter*39.37+obj1.centimetre*.3937008+obj2.feet*12+obj2.inch);
  if(i>=12)
  {
   w.feet=i/12;
   w.inch=i%12;
  }
  else
  {
   w.feet=0;
   w.inch=i;
  }
  w.display();
 }
}
int main()
{
 DM obj1;
 DB obj2;
 obj1.print();
 obj2.print();
 sum(obj1,obj2);
 getch();

}


