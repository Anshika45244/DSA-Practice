#include<iostream>
#include<vector>
using namespace std;

void selectionshort(vector<int>& arr , int n){
    for(int i = 0; i< n-1; i++){
        int minIndex = i; // assume current index is minimum
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]); 
    }
}

int main (){
    vector<int> arr = {22,54,76,94,1,4,3,8,30};
    int n = arr.size();
    selectionshort(arr, n); // function call
    for(int i= 0; i<n; i++)
        cout << arr[i] << " ";
    return 0;
}

  
