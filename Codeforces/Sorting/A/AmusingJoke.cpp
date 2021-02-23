#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool ValidateString(string s1, string s2, string s3) {
    string s = s1 + s2;

    if (s.size() != s3.size()) {
        return false;
    }

    sort(s.begin(), s.end());
    sort(s3.begin(), s3.end());

    for (int i = 0; i < s3.size(); i++) {
        if (s[i] != s3[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    if (ValidateString(s1,s2,s3)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}