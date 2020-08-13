#include<iostream>
#include<conio.h>
using namespace std;
class recarea{
    private:
    int l,b;
    public:
    recarea( int l, int b){
    this->l=l;
    this->b=b;}
    int area (){
    return l*b;
    }
    int compare(recarea r)
    {
        return this->area()<r.area();
    }
};
int main(){
recarea r1(4,7);
recarea r2(5,7);
if(r2.compare(r1))
{
    cout<<"rectangle1 is greater";
}
else
{
   cout<<"rectangle2 is greater"; 
}
getch();
return 0;
}
