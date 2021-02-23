#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool ValidateArray(vector<int> v, int d) {
    sort(v.begin(), v.end());

    int min = v[0] + v[1];

    if (v[v.size() - 1] > d || min > d) {
        return false;
    }

    return true;
}

int main() {
    int t, n, d;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n >> d;
        vector <int> v(n);
        
        for (int j = 0; j < n; j++) {
            cin >> v[j];
        }

        if (ValidateArray(v, d)) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }

        v.clear();
    }

    return 0;
}