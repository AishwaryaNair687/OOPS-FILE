#include <iostream>
#include<conio.h>
using namespace std;
class equations{
    public: int A, C;
    int result(int b,int c){
        A=b*b*b-c*c;
        cout<<"A="<<A<<endl;
        return A;
    }
    int result(int a,int b, int c){
     A=b*b+c*c-4*a*c;
      cout<<"A="<<A<<endl;
       return A;
    }
    int result(double a, double b, double c){
    C=b*b+c*c+2*a*c;
    cout<<"C="<<C<<endl;
       return C;
    }
};
int main()
{
    equations obj;
        cout<< "\n RESULT OF EQUATION BY FUNCTION OVERLOADING" << endl;
        obj.result(4,2);
        obj.result(4,5,6);
        obj.result(4.3,4.5,6.7);
        return 0;
}