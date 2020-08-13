#include <iostream>
#include<conio.h>
using namespace std;
class Stinfo {
private:
   char name[20];
   int age, year;
  char course[50];
public:
   void read() {
            cout << "Enter Name :";
      cin >> name;
      cout << "Enter your age :";
      cin >> age;
      cout << "Enter your year in which you are studying:";
      cin >> year;
      cout<< "Enter your course:";  
   }
   void print() {
           cout << "Name :" << name << endl;
      cout << "Age :" << age << endl;
      cout << "year in which studying :" << year << endl;    
   }
};
int main() {
   Stinfo stu;
   cout << "\nStudentInfo-->" << endl;
   stu.read(); 
   stu.print();
   getch();
   return 0;
}
