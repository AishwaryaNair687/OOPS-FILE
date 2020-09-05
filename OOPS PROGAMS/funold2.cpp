#include <iostream>
#include<conio.h>
using namespace std;
class power{
    public: double answer=1,a,b;
   int cal( int a,int b){
       this->a=a;
       this->b=b;
   if(b==0){
      this->answer= answer;
}
   else{
   for ( int i = 1; i <=b; i++)
   {
    answer=answer*a; 
   }}
   cout<<"your answer:"<< a << "^"<<b<<"="<< answer<< endl;
   return answer;
}
 int cal( double a,int b){
     this->a=a;
       this->b=b;
   if(b==0){
         this->answer= answer;
 }
   else{
   for (int i = 1; i <=b; i++)
   {
    answer=answer*a;   
   }
   cout<<"your answer:"<< a << "^"<<b<<"="<< answer<< endl;
   return answer;
 }
}
};
int main(){
power obj;
cout<< "\n function overloading with this pointer" << endl;
obj.cal(12,2);
obj.cal(12.44,2);
cout<<obj.a << endl;
cout<<obj.b << endl;
return 0;
}

