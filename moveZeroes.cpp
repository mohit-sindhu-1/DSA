#include <iostream>
#include <vector>
using namespace std;

// Leetcode - 283 | Move Zeroes
// ----------------------------------------
// Runtime - 0ms | Beats 100%
// Memory - 23.80 MB | Beats 54.21%
// ----------------------------------------

void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int i = 0, j = 1;

    while (i < n && j < n) {
        if (nums[i] == 0 && nums[j] != 0) {
            swap(nums[i++], nums[j++]);
        } else if (nums[i] != 0) {
            i++;
            if (i == j) {
                j++;
            }
        } else {
            j++;
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int& ele : v) {
        cin >> ele;
    }

    moveZeroes(v);
    for (int ele : v) {
        cout << ele << ' ';
    }
    cout << endl;
    return 0;
}