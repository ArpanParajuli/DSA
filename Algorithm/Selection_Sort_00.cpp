#include <iostream>

using namespace std;


int main()
{


	int a[] = { 3 , 20 , 9 , 10 , 69 , 1 };

	int size = sizeof(a) / sizeof(a[0]);



	for (int i = 0; i < size - 1; i++) {
		int MinIndex = i;

		for (int j = i + 1; j < size; j++) {

			if (a[MinIndex] > a[j]) {
				MinIndex = j; // get minvalue location index
			}
		}


		int temp = a[MinIndex];
		a[MinIndex] = a[i];
		a[i] = temp;
		
	}


	for (int i = 0; i < size; i++) {
		cout << a[i] << endl;
	}



	return 0;
}






