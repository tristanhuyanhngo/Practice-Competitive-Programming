#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string RearrangeString(string s) {
    vector <int> vect;
    string new_string;
    int token = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '+') {
            string temp = s.substr(token, token - i);
            vect.push_back(stoi(temp));
            token = i + 1;
        }   
        else if (i == s.size() - 1) {
            string temp = s.substr(token, s.size() - token);
            vect.push_back(stoi(temp));
        }
    }
    sort(vect.begin(), vect.end());

    for (int i = 0; i < vect.size(); i++) {
        new_string += to_string(vect[i]);
        if (i != vect.size() - 1) {
            new_string += "+";
        }
    }

    return new_string;
}

int main() {
    string s;
    cin >> s;

    cout << RearrangeString(s);
    return 0;
}