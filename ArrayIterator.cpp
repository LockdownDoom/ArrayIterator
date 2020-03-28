#include <iostream>
using namespace std;
int main(){
	cout << "Enter the length of the integer array:" << endl;
	int length;
	scanf("%i",&length);
	int int_array[length];
	for (int i=0;i<length;i++){
		cout << "Integer at index " << i << ":" << endl;
		scanf("%i",&int_array[i]);
	}
	int* first_index = &int_array[0];
	for (int i=0;i<length;i++){
		cout << "Value at address " << &first_index+(i*sizeof(int)) << ": " << *(first_index+i) << endl; 
	}
	return 0;
}
