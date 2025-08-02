#include<iostream>
using namespace std;
int main(){
    int arr[] ={1,2,4,3,6,5,66,22,11,32};
    int n = sizeof(arr)/sizeof(arr[0]);
    //swap alternate elements
    for (int i =0; i<n-1; i= i+2){
        swap(arr[i], arr[i+1]);
    }
    //print swapped  array
    cout<<" Array after swapping alternate elements: ";
    for(int i =0; i< n;i++){
        cout<< arr[i]<<" ";
        
}
return 0;
}
