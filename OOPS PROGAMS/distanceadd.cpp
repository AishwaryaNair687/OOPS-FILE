#include<iostream>
using namespace std;
class Distance{
    private:
    int km;
    int mtr;
    int sum;
    int diff;
public:
    void read(){
        cout  << "enter distance in km:";
        cin >> km;
        cout<<"enter distance in meter";
        cin>>mtr;
    }
    void get_distance(){
    cout<<"distance in km=:"<< km <<", meters="<<mtr<<endl;}
    void add(Distance d2){
     km =this->km+d2.km;
     mtr=this->mtr+d2.mtr;
     if(mtr>=1000){
      km =this->km+d2.km+(mtr/1000);
      mtr=(int)mtr%1000;  }
    }
};
int main()
{
    Distance d1;
    Distance d2;
    cout<<"enter the values:";
    d1.read();
    d2.read();
    d1.add(d2);
    d1.get_distance();
    return 0;
}
