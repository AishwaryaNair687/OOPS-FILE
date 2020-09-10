#include <iostream>
#include<conio.h>
using namespace std;
class mammal{
    public:
       int c;
};
class wingedmammal{
    public:
  int a;
};
class bat: public mammal,public wingedmammal{
    public:
    int b;
};
int main(){
bat obj;
cout<< "\n inherited 2 classes to bat class" << endl;
obj.a=4;
obj.b=3;
obj.c=6;
cout<<"mammal"<<obj.a <<endl;
cout<<"wingedmammal"<<obj.b <<endl;
cout<<"bat"<<obj.a <<endl;
getch();
return 0;
}

