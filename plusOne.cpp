#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Leetcode - 66 | Plus One
// ----------------------------------------
// Runtime - 0ms | Beats 100%
// Memory - 11.02 MB | Beats 99.59%
// ----------------------------------------

vector<int> plusOne(vector<int>& digits) {
    vector<int> ans;
    int i = digits.size() - 1;

    while (i >= 0 && digits[i] == 9) {
        ans.push_back(0);
        i--;
    }

    if (i < 0) {
        ans.push_back(1);
    } else {
        ans.push_back(digits[i] + 1);
        i--;
    }

    while (i >= 0) {
        ans.push_back(digits[i--]);
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> v{1, 2, 3};
    vector<int> v(n);
    for (int& ele : v) {
        cin >> ele;
    }

    vector<int> ans = plusOne(v);
    for (int ele : v) {
        cout << ele << ' ';
    }
    cout << endl;
    return 0;
}