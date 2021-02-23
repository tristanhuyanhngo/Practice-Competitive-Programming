#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int CalculateMaximumSum(vector<int> a, vector<int> b, int k) {
    int index = a.size() - 1;
    int sum_element = 0;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i < a.size(); i++) {
        if (k == 0 || a[i] > b[index - i]) {
            break;
        }
        if (a[i] < b[index - i]) {
            a[i] = b[index - i];
            k--;
        }
    }

    for (int i = 0; i < a.size(); i++) {
        sum_element += a[i];
    }

    return sum_element;
}

int main() {
    int t, n, k;
    
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> k;
        vector <int> a(n), b(n);
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        for (int j = 0; j < n; j++) {
            cin >> b[j];
        }

        cout << CalculateMaximumSum(a,b,k) << "\n";

        a.clear();
        b.clear();
    }
    return 0;
}