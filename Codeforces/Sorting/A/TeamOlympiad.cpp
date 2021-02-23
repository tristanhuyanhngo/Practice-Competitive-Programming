#include<iostream>
#include<queue>

using namespace std;

int CountTeam(vector<int> v) {
	int count_1 = 0, count_2 = 0, count_3 = 0;
	
	for (int i = 0; i < v.size(); i++) {
		switch (v[i]) {
		case 1: 
			count_1++;
			break;
		case 2: 
			count_2++;
			break;
		case 3:
			count_3++;
			break;
		default:
			break;
		}
	}
		
	int min = count_1;

	if (min > count_2) {
		min = count_2;
	}
	if (min > count_3) {
		min = count_3;
	}

	return min;
}

void PrintTeam(vector<int> v, int team) {
	queue <int> maths, programming, PE;
	
	for (int i = 0; i < v.size(); i++) {
		switch (v[i]){
		case 1:
			programming.push(i + 1);
			break;
		case 2:
			maths.push(i + 1);
			break;
		case 3:
			PE.push(i + 1);
			break;
		default:
			break;
		}
	}
	
	for (int i = 0; i < team; i++) {
		cout << programming.front() << " " << maths.front() << " " << PE.front() << "\n";
		programming.pop();
		maths.pop();
		PE.pop();
	}
}

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	int team = CountTeam(v);

	cout << team << "\n";
	PrintTeam(v, team);	
	
	return 0;
}
