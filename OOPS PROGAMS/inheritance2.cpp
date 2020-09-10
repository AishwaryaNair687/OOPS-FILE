#include <iostream>
#include<conio.h>
using namespace std;
class animal{
    public:
    void eats(){
        cout<<"animal eats...";
    }
void sleep(){
    cout<<" animal sleep"<< endl;
}
};
class dog: public animal{
    public:
    void barks(){
        cout<<"dog barks";}
};
class YoungOne: public dog{
    public:
    void nameofyoungone(){
        cout<<"object oriented programming";}
};
int main(){
dog obj;
cout<< "\n inherited with dog class" << endl;
obj.barks();
YoungOne obj1;
 cout<< "\n inherited with youngone class" << endl;
 cout<< "\n Multi level inheritance" << endl;
obj1.nameofyoungone();
getch();
return 0;
}

