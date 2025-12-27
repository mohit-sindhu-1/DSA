#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Leetcode - 14 | Longest Common Prefix
// ----------------------------------------
// Runtime - 0ms | Beats 100%
// Memory - 11.82 MB | Beats 65.12%
// ----------------------------------------

string longestCommonPrefix(vector<string>& strs) {
    string ans = "";

    int minimum = 200;
    for (int i = 0; i < strs.size(); i++) {
        int currLen = strs[i].size();
        minimum = min(minimum, currLen);
    }

    for (int i = 0; i < minimum; i++) {
        char ch = strs[0][i];

        for (int j = 1; j < strs.size(); j++) {
            if (strs[j][i] != ch) {
                return ans;
            }
        }

        ans += ch;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<string> v(n);
    for (string& ele : v) {
        cin >> ele;
    }

    cout << longestCommonPrefix(v) << endl;
    return 0;
}