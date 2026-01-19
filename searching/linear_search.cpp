#include <iostream>

// linear search algorithm
// best case : O(1)
// avg case : O(n)
// worst case : O(n)

using namespace std;


int linear_search(const int arr[] , int key , int size)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == key){
            return i; // returns index
        }
    }

    return -1; // not found
}

int main()
{
    int arr[] = {93 , 28 , 57 , 38 ,29 , 24 , 1};
    int index = linear_search(arr , 24 , 7);

    if(index != -1){
        cout << index << endl;
    }

    return 0;
}



