#include<iostream>
#include<string>

using namespace std;

int CalculateScore(string s) {
    
}

int main() {
    int test_case;
    string s;

    cin >> test_case;

    for (int i = 0; i < test_case; i++) {
        cin >> s;
        cout << CalculateScore(s);
    }

    return 0;
}