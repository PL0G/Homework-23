#include <iostream>
#include <cstdlib>
#include <ctime>
//Task 1
void max_chng(int &a, int &b, int &c) {
	int* pa=&a; int* pb=&b; int* pc=&c;
	int max=a;
	max=max > b ? max : b;
	max=max > c ? max : c;
	*pa = max;
	*pb = max;
	*pc = max;
}
//Task 2
int arr_ref(int arr[], const int length) {
	int& ref=arr[0];
	for(int i=0;i<length;i++)
		if (arr[i] < 0) {
			ref = arr[i];
			break;
		}
	return ref;
}
//Task 3
void arr_null(int arr1[], const int length1, int arr2[], const int length2) {
	int* pa1=&arr1[0]; int* pa2 = &arr2[0];
	for (int i = 0; i < length1; i++) {
		for (int j = 0; j < length2; j++) {
			if (*(pa2+j)==*(pa1+i))
				*(pa2+j) = 0;
		}
	}
}
int main() {
	setlocale(LC_ALL, "Russian");
	//Task 1
	int a = 9, b = 7, c = 5;
	std::cout << a << " " << b << " " << c << "\n";
	max_chng(a, b, c);
	std::cout << a << " " << b << " " << c << " \n";
	//Task 2
	const int length = 10;
	int arr[length]{ 1,-2,3,4,-5,-6,7,8,-9,0 };
	std::cout << arr_ref(arr, length)<<"\n";
	//Task 3
	const int length1 = 7;
	const int length2 = 5;
	int arr1[length1]{ 5,6,7,8,3,2,3 };
	int arr2[length2]{ 3,5,9,11,7 };
	arr_null(arr1, length1, arr2, length2);
	for (int i = 0; i < length2; i++)
		std::cout << arr2[i] << " ";

	return 0;
}