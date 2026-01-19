#include <iostream>

using namespace std;




// binary search algorithm


// best case : O(1)
// worst case : O(log n)


int BinarySearch(int arr[] , int size ,  int key)
{
    int low = 0 , high = size - 1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;


        if(arr[mid] == key){
            return mid;
        }


        if(arr[mid] < key){
            low = mid + 1;
        }

        else{
            high = mid -1;
        }
    }

    return -1;

   
}
int main()
{


    // binary search needs sorted data and search the data..
    
  int arr[] = {2, 5, 10, 18, 29, 33, 39, 49};

   int size = sizeof(arr) / sizeof(arr[0]);
   int key = 29;


   int index = BinarySearch(arr,size, key);
   
   if(index == -1){
    cout << "Element is not present in array!" << endl;
   }

   else {
     cout << "Element is present at index " << index << endl;
   }
    return 0;
}