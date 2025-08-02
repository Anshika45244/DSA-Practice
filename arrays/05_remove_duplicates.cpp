#include<iostream>
#include<unordered_set>   //hearder of STL'Standard template library'it store unique data only
#include<vector>    //also STL.it is dynamic array use to increase the size when needed.
using namespace std;
int main() {
	int arr[]= {1,2,3,2,1,6,3,9,4,1,5};
	int n= sizeof(arr)/sizeof(arr[0]);


	unordered_set<int> seen;   //it store those element which already visited.
	vector<int> unique;     //create empty vector where w store unique elements.


	for(int i =0; i< n; i++) {
		if(seen.find(arr[i]) == seen.end()) {
			unique.push_back(arr[i]);
			seen.insert(arr[i]);
		}
	}

	cout<<"unique elements: ";
	for(int num : unique) {    // range based loop that can access every element.
		cout<< num <<" ";
	}

	return 0;
}
