#include<iostream>
#include<conio.h>
using namespace std;
class prime {
   private:
    int a, k, i;
public:
    prime(int x){
        a = x;}
    void solve() {
        k = 1;
        {
            for (i = 2; i <= a / 2; i++)
                if (a % i == 0) {
                    k = 0;
                    break;
                } else {
                    k = 1;}            
        }}   
    void result() {
        if (k == 1)
            cout << "\n" << a << " is a Prime Number.";
        else
            cout << "\n" << a << " is Not a Prime Number.";
    }};
int main() {
    int a;
    cout << "Enter the Number:";
    cin>>a;
    prime obj(a);
    obj.solve();
    obj.result();
    getch();
    return 0;
}