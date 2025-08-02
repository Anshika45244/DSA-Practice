#include <iostream>
#include <unordered_map>// to count the frequency of number to map
int main(){
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 6, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> freq;

    // Count frequency of each element
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    cout << "Duplicate elements are: ";
    for (auto it : freq) {
        if (it.second > 1) {
            cout << it.first << " ";
        }
    }

    return 0;
}
