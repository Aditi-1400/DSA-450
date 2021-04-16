#include<bits/stdc++.h>

using namespace std;

int main() {

	long long t;
	cin >> t;
	while (t--) {

		long long n;
		cin >> n;
		long long arr[] = {20, 36, 51, 60};
		if (n <= 4) {
			cout << arr[n - 1] << endl;
			continue;
		}
		long long k = n / 4;
		long long l = (n - 1) % 4;
		long long ans;
		if (n % 4 == 0) {
			ans = k * 60 - 4 * (n - 4);

		}
		else
			ans = k * 60 + arr[l] - 4 * (n - 4);
		cout << ans << endl;

	}
}


1 4 6
2 5 7
3 6 8