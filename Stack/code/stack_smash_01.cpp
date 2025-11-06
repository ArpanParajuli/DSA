#include <iostream>
#include <cstring>

using namespace std;
// stack smash bakchodi

class test{
  public:
   char name[5]; // 6 byte
   int rollno = 1; // 4 byte
};

int main()
{
   test t;
   cout << "Rollno before " << t.rollno << endl;
   strcpy(t.name , "Arpanparajuli"); 
   cout << "Rollno after " << t.rollno << endl;
}