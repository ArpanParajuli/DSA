#include <iostream> 

using namespace std;


int counter = 0;

    int main()
    {
        while (true) {
         int * data = new int[100000000];
         counter ++;
        cout  << "Allocatiing << " << (4 * 100000000) << " " << counter << " Times" << endl; 
    }
}


/*

output


locatiing << 40000000 33 Times
Allocatiing << 40000000 34 Times
Allocatiing << 40000000 35 Times
Allocatiing << 40000000 36 Times
Allocatiing << 40000000 37 Times
Allocatiing << 40000000 38 Times
Allocatiing << 40000000 39 Times
Allocatiing << 40000000 40 Times
Allocatiing << 40000000 41 Times
Allocatiing << 40000000 42 Times
Allocatiing << 40000000 43 Times
Allocatiing << 40000000 44 Times
Allocatiing << 40000000 45 Times
Allocatiing << 40000000 46 Times
Allocatiing << 40000000 47 Times
Allocatiing << 40000000 48 Times
Allocatiing << 40000000 49 Times
Allocatiing << 40000000 50 Times
terminate called after throwing an instance of 'std::bad_alloc'
  what():  std::bad_alloc

*/