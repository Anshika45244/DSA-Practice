#include<iostream>
using namespace std;

int firstOcc(int arr[], int n,  int key)
{
int s =0 , e = n-1;
int mid = s +(e - s)/2;
int ans = -1;
while(s<= e){
    if(arr[mid] == key){
        ans = mid; // store it
        e = mid -1;
    }
    else if(key >arr[mid]){
        s= mid +1;
    }
    else if(key <arr[mid]){
        e = mid -1;
    }
    mid= s + (e - s)/2;
    
}
return ans;
}
int main(){
    int even[5] ={1,2,3,4,5};
    cout<<"First occurrence of 3 is at index  "<< firstOcc(even, 5,3);
    return 0;
}
