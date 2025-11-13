#include <iostream>
#include <queue>

using namespace std;
int main()
{
     queue <string> q1;
     

    //  for(int i = 0; i < 100000000 ; i++){
    //      q1.push("Arpan Parajuli");
    //  }
     
   
     for(int i = 0; i < 100000000 ; i++){ 
         q1.push("Vijay setupati");
          q1.push("Arpan Parajuli");
         q1.push("Naman singh!");


         
     }
   
    


     cout << q1.front() << endl;
}