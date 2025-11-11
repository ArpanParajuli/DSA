#include <iostream>
using namespace std;


int main()
{
   int * ArrPointer = new int[100]; // 100 * 4 = 400 bytes
   cout << "Address of Pointer to array " << &ArrPointer << endl;

   cout << "Adress of allocated heap memory address = " << ArrPointer << endl;

   /*
   
   Address of Pointer to array 0x61ff0c
   Adress of allocated heap memory address = 0x10f1558

   */

   delete ArrPointer;
}