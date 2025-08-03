#include <iostream>
#include <vector>
#include <algorithm> // for sort
using namespace std;

void findTriplets(vector<int>& arr, int target) {
    sort(arr.begin(), arr.end()); // Step 1: Sort the array
    int n = arr.size();

    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;       // start after i
        int right = n - 1;      // last element

        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];

            if (sum == target) {
                cout << "(" << arr[i] << ", " << arr[left] << ", " << arr[right] << ")\n";
                left++;
                right--;
                // Skip duplicates if needed
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int targetSum = 10;

    cout << "Triplets with sum " << targetSum << ":\n";
    findTriplets(arr, targetSum);

    return 0;
}
