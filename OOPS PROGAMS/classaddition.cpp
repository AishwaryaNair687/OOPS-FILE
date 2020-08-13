#include <iostream>
#include<conio.h>
using namespace std;
class Addition{
    private:
    int num1,num2,answer;
    public:
    void scan(){
        cout<<"Enter 1st no.:";
        cin>> num1;
        cout<<"Enter 2nd no.:";
        cin>> num2;
    }
    void sum(){
    answer=num1+num2;
}
void print(){
    cout<<"your answer:"<< num1 << "+"<<num2<<"="<< answer<< endl;
}
};
int main(){
Addition obj;
cout<< "\n Addition" << endl;
obj.scan();
obj.sum();
obj.print();
getch();
return 0;
}

