// pivote index (when left sum = right sum--->is called pivote )
#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int total = 0, leftSum = 0;
    for (int num : nums) total += num;//

    for (int i = 0; i < nums.size(); i++) {
        if (leftSum == total - leftSum - nums[i])
            return i;
        leftSum += nums[i];
    }
    return -1;//if no match found.(pivote index is not present)
}

int main() {
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    cout << "Pivot Index: " << pivotIndex(nums) << endl;
    return 0;
}
