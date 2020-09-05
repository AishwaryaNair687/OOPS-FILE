#include <iostream>
#include<conio.h>
using namespace std;
class power{
    private:
    int num,p,answer=1;
    public:
    void scan(){
        cout<<"Enter no.:";
        cin>> num;
        cout<<"Enter power no.:";
        cin>> p;
    }
    int cal(){
   int i;
   if(p==0){
   return answer;}
   else{
   for ( i = 1; i <=p; i++)
   {
    answer=answer*num; 
   }
   return answer;
   }
}
void print(){
    cout<<"your answer:"<< num << "^"<<p<<"="<< answer<< endl;
}
};
int main(){
power obj;
cout<< "\n power" << endl;
obj.scan();
obj.cal();
obj.print();
getch();
return 0;
}

