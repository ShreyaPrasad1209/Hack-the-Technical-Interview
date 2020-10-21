#include <bits/stdc++.h>
using namespace std;

void rotate(string a, string b) {
	if(a.length()!=b.length()) {
		cout << "FALSE";
		return;
	}
	else {
		a = a.append(a);
		if (a.find(b) != string::npos) {
			cout << "TRUE";
			return;
		}
		else {
			cout << "FALSE";
			return;
		}
	}
}
int main() {
	string a, b;
	cin >> a >> b;
	rotate(a, b);
}
