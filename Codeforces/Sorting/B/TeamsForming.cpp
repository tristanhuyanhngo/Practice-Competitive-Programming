#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int FindNumberOfProblems(vector<int> v) {
    int number = 0;
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i+=2) {
        number += v[i + 1] - v[i];
    }    

    return number;
}

int main() {
    int n;

    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << FindNumberOfProblems(v);
    return 0;
}