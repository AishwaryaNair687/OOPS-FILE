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
int main(){
dog obj;
cout<< "\n inherited with dog class" << endl;
obj.barks(); 
getch();
return 0;
}

