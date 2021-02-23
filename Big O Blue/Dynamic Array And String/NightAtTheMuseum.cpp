#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int FindNumberRotation(string s) {
	int number_rotation = 0, length = 26;
	char start_position = 'a';
	
	for (int i = 0; i < s.size(); i++) {
		int temp = abs(s[i] - start_position);
		
		if (temp > length / 2) {
			number_rotation += length - temp;
		}
		else {
			number_rotation += temp;
		}
		
		start_position = s[i];
	}
	
	return number_rotation;
}

int main() {
	string word;
	cin >> word;
	
	cout << FindNumberRotation(word);
	return 0;
}
