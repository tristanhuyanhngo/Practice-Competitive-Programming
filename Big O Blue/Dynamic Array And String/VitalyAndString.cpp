#include <iostream>
#include <string>

using namespace std;

string FindVitalyString(string S, string T) {
	for (int i = S.size() - 1; i >= 0; i--) {
		if (S[i] == 'z') {
			S[i] = 'a';
		}
		else {
			S[i]++;
			break;
		}
	}
	
	return S == T ? "No such string" : S;
}

int main() {
	string T, S;
	cin >> S >> T;
		
	cout << FindVitalyString(S,T);
	
	return 0;
}
