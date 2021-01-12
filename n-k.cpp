#include<bits/stdc++.h>

using namespace std;

int main() {

	int n;
	cin >> n;
	int k;
	cin >> k;
	int arr[n];
	map<int, int> mp;
	for (int i = 0; i < n; i++) {

		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {

		mp[arr[i]]++;
	}

	for (auto i : mp) {

		if (i.second > n / k) {
			cout << i.first << " ";
		}

	}
}