// Program to perform linear search in an array
#include <iostream>
using namespace std;

int main() {
	int arr[] = {10, 25, 30, 45, 50};
	int n = sizeof(arr) / sizeof(arr[0]);

	int key;
	cout << "Enter the element to search: ";
	cin >> key;

	bool found = 0;

	for(int i = 0; i < n; i++) {
		if(arr[i] == key) {
			cout << "Element found at index " << i << endl;
			found = 1;
			break;
		}
	}

	if(!found) {
		cout << "Element not found in the array." << endl;
	}

	return 0;
}
