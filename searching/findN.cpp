#include <iostream>

using namespace std;


 // linear search


int main()
{
   int n = 23;
   
   int arr[] = {34 , 23 ,59 ,38 , 95 ,98};

    int arr_size = sizeof(arr) / sizeof(arr[0]);\
    
   bool success = false;
   for(int i = 0; i < arr_size - 1 ; i++)
   {
     if (n == arr[i])
     {
        success = true;
        cout << "Founded the number : "  << n  << " on the index " << i << endl;
        break;
     }
   }

   if(success == false)
   {
    cout << "Number cannot be founded " << endl;
   }
}