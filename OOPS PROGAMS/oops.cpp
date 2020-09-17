#include<iostream>
using namespace std;
class cal
{
    public:
    double num,num2,answer;
    char op;
    char c;
    void ans(){
        do{
        cout<<"Enter first number,operator,second number";
        cin>>num>>op>>num2;
        switch(op){
            case '+':answer=num+num2;
                    break;
            case '-':answer=num-num2;
                    break;
            case '/':answer=num/num2;
                    break;
            case '*':answer=num*num2;
                    break;
                    default:answer=0;
        }
        cout<<"Answer"<<answer;
        cout<<"\n Do Another(enter 'y' or 'n')?";
        cin>>c;
    } while (c!='n');
}
};
int main(){
 cal obj;
 obj.ans();
}
