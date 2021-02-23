#include <iostream>
#include <vector>

using namespace std;

bool ValidateLoveTriangle(int n, vector<int> v) {
    for (int i = 0; i < n; i++) {
        if (v[v[v[i] - 1] - 1] - 1 == i) {
            return true;
        }
    }

    return false;
}

int main() {
    int n;

    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    if (ValidateLoveTriangle(n, v)) {
        cout << "YES";
    }    
    else {
        cout << "NO";
    }

    return 0;
}