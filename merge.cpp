#include <iostream>
#include <vector>
using namespace std;

// Leetcode - 88 | Merge Sorted Array
// ----------------------------------------
// Runtime - 0ms | Beats 100%
// Memory - 12.27 MB | Beats 70.67%
// ----------------------------------------

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    if (n == 0) {
        return;
    }

    int idx = m + n - 1, i = m - 1, j = n - 1;

    while (i >= 0 && j >= 0) {
        if (nums2[j] >= nums1[i]) {
            nums1[idx--] = nums2[j--];
        } else {
            nums1[idx--] = nums1[i--];
        }
    }

    while (j >= 0) {
        nums1[idx--] = nums2[j--];
    }
}

int main() {
    return 0;
}