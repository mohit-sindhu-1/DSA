#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// Leetcode - 350 | Intersection of Two Arrays II
// ----------------------------------------
// Runtime - 3ms | Beats 31.28%
// Memory - 14.17 MB | Beats 90.02%
// ----------------------------------------

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    int n = nums1.size();
    int m = nums2.size();

    vector<int> ans;

    if (n <= m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (nums1[i] == nums2[j]) {
                    ans.push_back(nums1[i]);
                    nums2[j] = -1;
                    break;
                }
            }
        }
    } else {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (nums2[i] == nums1[j]) {
                    ans.push_back(nums2[i]);
                    nums1[j] = -1;
                    break;
                }
            }
        }
    }

    return ans;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> v1(n);
    for (int& ele : v1) {
        cin >> ele;
    }

    vector<int> v2(m);
    for (int& ele : v2) {
        cin >> ele;
    }

    vector<int> ans = intersection(v1, v2);
    for (int& ele : ans) {
        cout << ele << ' ';
    }
    cout << endl;

    return 0;
}