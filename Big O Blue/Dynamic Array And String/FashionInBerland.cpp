#include <iostream>
#include <vector>
using namespace std;

bool IsFastened(vector <int> v) {
	if (v.size() == 1) {
		if (v[0] == 1) {
			return true;	
		}
		else {
			return false;
		}
	}	
	
	int count_button = 0;
	
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == 0) {
			count_button++;
		}			
		
		if (count_button > 1) {
			return false;
		}
	}
	
	if (count_button == 0) {
		return false;
	}
	
	return true;
}

int main() {
	int n; 
	
	cin >> n;
	vector <int> v(n);
	
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	
	if (IsFastened(v)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	
	return 0;
}
