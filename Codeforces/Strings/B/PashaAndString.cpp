#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string TransformString(string s, vector<int> v) {
    int max = v[0], min = v[0];
    
    for (int i = 1; i < v.size(); i++) {
        if (v[i] > max) {
            max = v[i];
        }
        else if (v[i] < min) {
            min = v[i];
        }
    }

    int n = max - min + 2;
    int *counting = new int [n];
    for (int i = 0; i < n; i++) {
        counting[i] = 0;    
    }

    for (int i = 0; i < v.size(); i++) {
        counting[v[i] - min]++;
    }

    for (int i = 0; i < n; i++) {
        if (counting[i] % 2 != 0) {
            reverse(s.begin() + (i + min - 1), s.end() - (i + min - 1));
        }
    }

    delete[] counting;

    return s;
}

int main() {
    string s;
    int n;
    
    cin >> s >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << TransformString(s, v);
   
    return 0;
}