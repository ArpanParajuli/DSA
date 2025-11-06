#include <iostream>
using namespace std;



// in this demo we do stack overflow by calling main function recursively 

int counter = 0;

int main()
{
   cout << "main func call count = " << counter << endl;
   counter++;
   return main();
}