#include <iostream>
using namespace std;
inline int square(int side)
{
    
    return (side*side);
}
int main(){
    int side;
    cout<<"enter the side->";
    cin>>side;
cout<<"the sq. area value is:" << square(side) << "\n";
return (0);
}
