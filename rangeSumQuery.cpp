#include <iostream>
#include <vector>
using namespace std;

// Leetcode - 303 | Range Sum Query - Immutable
// ----------------------------------------
// Runtime - 0ms | Beats 100%
// Memory - 24.02 MB | Beats 21.98%
// ----------------------------------------

class NumArray {
    vector<int> prefixSum;

   public:
    NumArray(vector<int>& nums) {
        prefixSum.resize(nums.size());
        prefixSum[0] = nums[0];

        for (int i = 1; i <= nums.size(); i++) {
            prefixSum[i] += nums[i] + prefixSum[i - 1];
        }
    }

    int sumRange(int left, int right) {
        if (left == 0) {
            return prefixSum[right];
        }

        return prefixSum[right] - prefixSum[left - 1];
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int& ele : v) {
        cin >> ele;
    }

    int q;
    cin >> q;

    NumArray* obj = new NumArray(v);

    cout << endl;
    while (q--) {
        int left, right;
        cin >> left >> right;
        cout << obj->sumRange(left, right) << endl << endl;
    }

    return 0;
}