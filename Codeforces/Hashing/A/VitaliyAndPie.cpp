#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

char Uppercase(char c) {
    if ((int)c < 97) {
        return c;
    }

    return (int)c - 32;
}

int CountKey(int n, string s) {
    int count_key = 0, j = 0;
    int *characters = new int[26];

    for (int i = 0; i < 26; i++) {
        characters[i] = 0;
    }
    
    for (int i = 1; i <= s.size(); i += 2) {
        characters[Uppercase(s[j]) - 'A']++;
        j += 2;

        if (characters[s[i] - 'A'] != 0) {
            characters[s[i] - 'A']--;
        }
        else {
            count_key++;
        }
    }

    return count_key;
}

int main() {
    int n;
    string s;
    
    cin >> n >> s;
    
    cout << CountKey(n,s);
    
    return 0;
}