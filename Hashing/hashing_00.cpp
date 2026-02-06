#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

/*

Hashing Concepts



*/

int main()
{

  unordered_map <string , int> hashTable;


  unordered_map <int , string> nameTable;

  nameTable[0] = "Arpan Parajuli";

  hashTable["Arpan"] = 2005;
   

  cout << "Arpan's birth year = " << hashTable["Arpan"] << endl;



  cout << nameTable[0];

    return 0;
}