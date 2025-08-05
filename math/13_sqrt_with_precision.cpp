// Program to calculate square root of a number using binary search and precision

#include <iostream>
using namespace std;
long long int sqrtint(int n) {
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;

    while (s <= e) {
        long long int square = mid * mid;

        if (square == n)
            return mid;

        if (square < n) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}
double moreprecision(int n, int precision, int temsol) {
    double factor = 1;
    double ans = temsol;
  
  for (int i = 0; i < precision; i++) {
        factor = factor / 10;

        for (double j = ans; j * j < n; j = j + factor) {
            ans = j;
        }
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int temsol = sqrtint(n);
    double finalAns = moreprecision(n, 3, temsol);

    cout << "Answer is: " << finalAns << endl;

    return 0;
}
