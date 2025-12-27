#include <iostream>
#include <vector>
using namespace std;

// Leetcode - 26 | Remove Duplicate from Sorted Array
// ----------------------------------------
// Runtime - 0ms | Beats 100%
// Memory - 22.55 MB | Beats 77.71%
// ----------------------------------------

int removeDuplicates(vector<int>& nums) {
    int ele = nums[0], k = 1;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != ele) {
            ele = nums[i];
            nums[k++] = nums[i];
        }
    }

    return k;
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int& ele : v) {
        cin >> ele;
    }

    cout << removeDuplicates(v) << endl;
    for (int ele : v) {
        cout << ele << ' ';
    }
    cout << endl;
    return 0;
}