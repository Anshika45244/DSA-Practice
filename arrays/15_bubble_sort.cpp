#include<iostream>
#include<vector>
using namespace std;
void bubblesort(vector<int>& arr, int n){
    for(int i =0; i< n; i++){
        for(int j = 0; j<n-1; j++)
            if(arr[j] > arr[j+1])
        swap(arr[j], arr[j+1]);
    }
    }
     int  main(){
         vector<int>  arr ={ 23,33,2,1,8,5,9,45,23};
         int n = arr.size();
         bubblesort(arr, n);
         for(int i = 0; i<n;i++)
         cout<<arr[i]<<" ";
return 0;
}
