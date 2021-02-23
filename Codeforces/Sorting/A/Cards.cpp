#include <iostream>
#include <string>
using namespace std;

int* CountChar(string s) {
    int* a = new int[26];
    // Reset each element of array to 0 ! 
    for (int i = 0; i < 26; i++) {
        a[i] = 0;
    }

    for (int i = 0; i < s.size(); i++) {
        a[s[i] - 'a']++;
    }

    return a;
}

void PrintCard(string s) {
    string card = "";
    int* characters = CountChar(s);

    // Count ONE
    int min = characters['o' - 'a'];
    
    if (min > characters['n' - 'a']) {
        min = characters['n' - 'a'];
    }
    if (min > characters['e' - 'a']) {
        min = characters['e' - 'a'];
    }

    for (int i = 0; i < min; i++) {
        card += "1";
    }
    // Update the number of characters
    characters['o' - 'a'] -= min;
    characters['n' - 'a'] -= min;
    characters['e' - 'a'] -= min;

    // Count ZERO
    min = characters['z' - 'a'];

    if (min > characters['e' - 'a']) {
        min = characters['e' - 'a'];
    }
    if (min > characters['r' - 'a']) {
        min = characters['r' - 'a'];
    }
    if (min > characters['o' - 'a']) {
        min = characters['o' - 'a'];
    }

    for (int i = 0; i < min; i++) {
        card += "0";
    }

    // Print Card;
    for (int i = 0; i < card.size(); i++) {
        cout << card[i] << " ";
    }
}

int main() {
    int n;
    string s;
    
    cin >> n >> s;
    
    PrintCard(s);
    return 0;
}