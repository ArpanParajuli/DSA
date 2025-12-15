#include <iostream>




int main(){

    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

   for(int i = 1; i < n; i++){
   int temp = arr[i];
   int j = i;


   while(j > 0 && arr[j -1] > temp){
       arr[j] = arr[j -1];
       j--; 
   }

   arr[j] = temp;

}



    for(int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }   
    
    return 0;
}