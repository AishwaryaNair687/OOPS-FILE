#include <iostream> 
using namespace std; 
class myClass
{
    static int a;int b ;
    public:
    static int c;
    void set(int i,int j)
    { a++; b=i; c=j;}
    void get()
    {cout<<"\nStatic a:" << a <<".Non-Static b:"<< b <<".Static c:"<< c;}
};
int myClass::a=10;
int myClass::c;
int main()
{
    cout<<"\nPublic Static c:" <<myClass::c;
    myClass m1,m2;
    m1.set(1,2);
    m2.set(3,4);
    m1.get();
    m2.get();
    return 0;
}