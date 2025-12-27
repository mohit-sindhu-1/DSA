#include <iostream>
#include <vector>
using namespace std;

// Leetcode - 35 | Search Insert Position
// ----------------------------------------
// Runtime - 0ms | Beats 100%
// Memory - 13.60 MB | Beats 41.38%
// ----------------------------------------

int searchInsert(vector<int>& nums, int target) {
    int n = nums.size();
    int st = 0, end = n - 1;

    while (st <= end) {
        int mid = (end + st) / 2;

        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] > target) {
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }

    if (st > end) {
        return st;
    } else {
        return end + 1;
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int& ele : v) {
        cin >> ele;
    }

    int target;
    cin >> target;

    cout << searchInsert(v, target) << endl;
    return 0;
}