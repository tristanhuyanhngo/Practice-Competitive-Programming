#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int FindNumberOfTeams(vector <int> v, int k) {
    int number_teams = 0;

    for (int i = 0; i < v.size(); i++) {
        if (5 - v[i] >= k) {
            number_teams++;
        }
    }

    return number_teams / 3;
}

int main() {
    int n, k;
    
    cin >> n >> k;
    vector <int> vect(n);
    for (int i = 0; i < n; i++) {
        cin >> vect[i];
    }

    cout << FindNumberOfTeams(vect, k);

    return 0;
}