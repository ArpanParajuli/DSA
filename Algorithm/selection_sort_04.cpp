#include <iostream>



using namespace std;

void selection_sort(int arr[] , int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        int index = i;

        for(int j = i + 1; j < size ; j++)
        { 
            if(arr[i] > arr[j]){
                index = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
}

int main()
{
   int arr[] = {92 , 10 , 83 ,839 , 26 , 10 ,39};
   int size = sizeof(arr) / sizeof(arr[0]);

    selection_sort(arr , size);


    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}