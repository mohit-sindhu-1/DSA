#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// Leetcode - 349 | Intersection of Two Arrays
// ----------------------------------------
// Runtime - 1ms | Beats 47.98%
// Memory - 13.94 MB | Beats 79.46%
// ----------------------------------------

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    int n = nums1.size();
    int m = nums2.size();

    vector<int> ans;
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    if (n <= m) {
        for (int i = 0; i < n; i++) {
            while (i < n - 1 && nums1[i] == nums1[i + 1]) {
                i++;
            }

            for (int j = 0; j < m; j++) {
                if (nums1[i] == nums2[j]) {
                    ans.push_back(nums1[i]);
                    break;
                }
            }
        }
    } else {
        for (int i = 0; i < m; i++) {
            while (i < m - 1 && nums2[i] == nums2[i + 1]) {
                i++;
            }

            for (int j = 0; j < n; j++) {
                if (nums2[i] == nums1[j]) {
                    ans.push_back(nums2[i]);
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