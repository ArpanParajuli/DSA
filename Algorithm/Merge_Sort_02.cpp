#include <iostream>

using namespace std;


void mergesort(int a[], int l, int mid , int end){
        
    int n1 = mid - l + 1;
    int n2 = end - mid;

    int * ptr1 = new int[n1];
    int * ptr2 = new int[n2];

     for(int i = 0; i < n1; i++){
        ptr1[i] = a[l + i];
     }

     
     for(int i = 0; i < n2; i++){
        ptr2[i] = a[mid + i + 1];
     }

     int i = 0, j = 0 , k = l;

     while(i < n1 && j < n2){
        if(ptr1[i] <= ptr2[j]){
            a[k] = ptr1[i];
            i++;
        }
          else{
            a[k] = ptr2[j];
            j++;
          }

          k++;
     }
    


     while(i < n1){
        a[k++] = ptr1[i++];

     }

      while(j < n2){
        a[k++] = ptr2[j++];
        
     }

}

int main()
{
    int a[] = {1, 6, 7, 10, 12 , 14};
 

    mergesort(a, 0, 2 , 5);

    for(int i = 0; i < 6 ; i++){
        cout << a[i]  << " ";
    }


    return 0;
}