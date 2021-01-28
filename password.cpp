#include<bits/stdc++.h>


using namespace std;


int main() {


	int t;
	cin >> t;
	while (t--) {


		string s;
		cin >> s;


		int n = s.length();
		bool lcl = false, ucl = false, digit = false, scl = false;


		for (int i = 0; i < n; i++) {

			if (s[i] <= 122 && s[i] >= 97) {
				lcl = true;
			}

			else if (s[i] >= 65 && s[i] <= 90 && i != 0 && i != n - 1) {

				ucl = true;
			}

			else if (s[i] >= 48 && s[i] <= 57 && i != 0 && i != n - 1) {
				digit = true;
			}

			else if (s[i] == '@' || s[i] == '#' || s[i] == '%' || s[i] == '&' || s[i] == '?')
			{
				if (i != n - 1 && i != 0)
					scl = true;
			}
		}


		if (n >= 10 && scl && ucl && digit && lcl)
			cout << "YES" << endl;
		else {

			cout << "NO" << endl;
		}
	}
}
