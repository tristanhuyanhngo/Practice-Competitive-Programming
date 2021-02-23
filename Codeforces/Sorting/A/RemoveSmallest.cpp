#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool ValidateArray(vector <int> vect) {
    int number_element = vect.size();
    sort(vect.begin(), vect.end());
    
    for (int i = 0; i < vect.size() - 1; i++) {
        if (vect[i + 1] == vect[i]) {
            number_element--;
        }
        else if (vect[i + 1] - vect[i] <= 1) {
            number_element--;
        }
    }

    if (number_element == 1) {
        return true;
    }

    return false;
}

int main() {
    int t, n, temp;
    vector <int> vect;
    
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> temp;
            vect.push_back(temp);
        }

        if (ValidateArray(vect)) {
            cout << "YES" << "\n";
        }
        else {
            cout << "NO" << "\n";
        }

        vect.clear();
    }

    return 0;
}