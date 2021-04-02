#include<iostream>
using namespace std;

int main() {

	int t;
	cin >> t;
	while (t--) {

		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		int i = 0;
		int count = 0;
		while (i < n) {

			if (s[i] == '*') {
				while (s[i] == '*') {
					count++;
					i++;
				}

				if (count >= k) {

					cout << "YES" << endl;
					continue;
				}
				else {
					count = 0;
				}
			}

			else {

				i++;
				count = 0;

			}
		}
	}
}