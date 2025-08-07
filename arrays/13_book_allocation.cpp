#include<vector>
using namespace std;

bool isPossible(vector<int> arr, int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;// track pages allocated  to current student
    
    for(int i = 0; i<n; i++) {
        if(pageSum + arr[i] <= mid) {
            pageSum += arr[i];// If adding current book doesn't exceed limit, add to same student
        } else {
        }
        else
        {
            studentCount++; // allocate to next student
            if(studentCount > m || arr[i] > mid ) {
            return false;
        }
            pageSum = arr[i];//Start current sum with current book for new student
        }
        }
        if(studentCount > m) {
            return false;//Additional safety to stop early if student limit passed
        }
    }
    return true;// Books allocated within mid limit successfully
}
}

int allocateBooks(vector<int> arr, int n, int m) {
    int s = 0;//Lower bound of binary search (0)
    int sum = 0;
    
    for(int i = 0; i<n; i++) {
        sum += arr[i];//Accumulate sum of pages
    }
    int e = sum;//Upper bound = sum of all pages
    int ans = -1;
    int mid = s + (e-s)/2;
    
    while(s<=e)
    {
        if(isPossible(arr,n,m,mid)) {
            ans = mid;// If feasible with mid, record it as potential answer
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;//Recompute midpoint for next iteration
    }
    }
    return ans;
}
#include<iostream>
int main() {
    vector<int> books = {12, 34, 67, 90};
    int n = books.size();
    int m = 2;

    int result = allocateBooks(books, n, m);
    cout << "Minimum number of pages: " << result << endl;
    return 0;
}
