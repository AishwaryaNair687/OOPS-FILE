#include<iostream>
using namespace std;
class calculation
{
public:
inline float mul(float a, float b)
{
    return (a*b);
}
inline float div(float a, float b)
{
    return (a/b);
}
inline float add(float a, float b)
{
    return (a+b);
}
inline float sub(float a, float b)
{
    return (a-b);
}
};
int main()
{   calculation obj;
    int num1, num2;
    cout<<"ENTER 2 NO.S YOU WANT TO CALCULATE:";
    cin>>num1>>num2;
    cout<<"\n Product is:"<<obj.mul(num1,num2);
    cout<<"\n Divsion is:"<<obj.div(num1,num2);
    cout<<"\n Addition is:"<<obj.add(num1,num2);
    cout<<"\n Subtraction is"<<obj.sub(num1,num2);
    return (0);
}