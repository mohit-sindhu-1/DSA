#include <iostream>
#include <string>
using namespace std;

// Leetcode - 482 | License Key Formatting
// ----------------------------------------
// Runtime - 0ms | Beats 100%
// Memory - 10.71 MB | Beats 49.89%
// ----------------------------------------

char toUpperCase(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return char(ch - 32);
    }

    return ch;
}

string licenseKeyFormatting(string s, int k) {
    int n = s.length();
    string ans = "";
    int chars = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] != '-') {
            chars++;
        }
    }

    if (chars == 0) {
        return ans;
    }

    while (s[n - 1] == '-') {
        n--;
    }

    int firstGroupSize = chars % k;
    if (firstGroupSize == 0) {
        firstGroupSize = k;
    }

    int idx = 0;
    while (firstGroupSize) {
        if (s[idx] != '-') {
            ans.push_back(toUpperCase(s[idx]));
            firstGroupSize--;
        }
        idx++;
    }

    int tempK = 0;
    while (idx < n) {
        if (tempK != 0) {
            if (s[idx] != '-') {
                ans.push_back(toUpperCase(s[idx]));
                tempK--;
            }
            idx++;
        } else {
            ans.push_back('-');
            tempK = k;
        }
    }

    return ans;
}

int main() {
    string s;
    cin >> s;

    int k;
    cin >> k;

    cout << licenseKeyFormatting(s, k);
    return 0;
}