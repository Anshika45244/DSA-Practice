#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;
bool uniqueOccurrences(vector<int>& arr) {
    unordered_map<int, int> freq;         // Element -> Frequency

    for (int num : arr) {
        freq[num]++;                      // Count frequency of each number
    }
    unordered_set<int> seen;              // To store unique frequencies

    for (auto pair : freq) {
        if (seen.count(pair.second)) {    // If frequency already seen, return false
            return false;
        }
        seen.insert(pair.second);         // Add new frequency to set
    }
 return true;                          // All frequencies were unique
}
int main() {
    vector<int> arr1 = {1, 2, 2, 1, 1, 3};
    if (uniqueOccurrences(arr1))
        cout << "true\n";
    else
        cout << "false\n";

    vector<int> arr2 = {1, 2};
    if (uniqueOccurrences(arr2))
        cout << "true\n";
    else
      cout << "false\n";
    return 0;
}
