#include <iostream>
#include <vector>
using namespace std;

// Leetcode - 3512 | Minimum Operations to Make Array Sum Divisible by K
// --------------------------------------------------------------------
// Runtime - 0ms | Beats 100%
// Memory - 45.29 MB | Beats 69.47%
// --------------------------------------------------------------------

int minOperations(vector<int>& nums, int k) {
    int sum = 0;
    for (int ele : nums) {
        sum += ele;
    }

    return sum % k;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int& ele : v) {
        cin >> ele;
    }

    int k;
    cin >> k;

    cout << minOperations(v, k) << endl;
    return 0;
}