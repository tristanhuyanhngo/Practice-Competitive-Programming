#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t, n;

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        sort(v.begin(), v.end());
        int min = 1001;
        for (int i = 0; i < v.size() - 1; i++) {
            if (min > (v[i + 1] - v[i])) {
                min = v[i + 1] - v[i];
            }
        }

        cout << min << "\n";
        v.clear();
    }
    
    return 0;
}