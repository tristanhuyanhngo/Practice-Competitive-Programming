#include <iostream>
#include <vector>
using namespace std;

int CalculateMinutes(vector <int> v) {
	int minutes_watched = 0, interesting_minutes = 0;
	
	for (int i = 0; i < v.size(); i++) {
		if (v[i] - interesting_minutes > 15) {
			return minutes_watched + 15;
		}
		else {
			minutes_watched += v[i] - interesting_minutes;
		}
		
		interesting_minutes = v[i];
	}
	
	return (minutes_watched + 15 > 90) ? 90 : minutes_watched + 15;
}

int main() {
	int n;
	
	cin >> n;
	vector <int> v(n);
	
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	
	cout << CalculateMinutes(v);
	
	return 0;
}
