#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int CalculateMinDistance(vector <int> vect) {
    sort(vect.begin(), vect.end());

    return (vect[1] - vect[0]) + (vect[2] - vect[1]);
}

int main() {
    vector <int> vect(3);

    cin >> vect[0] >> vect[1] >> vect[2];
    
    cout << CalculateMinDistance(vect);

    return 0;
}