#include<bits/stdc++.h>

using namespace std;

int main() {



	int t;
	cin >> t;
	while (t--) {

		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		int k;
		cin >> k;

		int low = 0;
		int high = n - 1;
		int flag = 0;

		int mid;
		while (low <= high) {

			mid = (low + high) / 2;
			if (k == arr[mid]) {
				flag = 1;
				break;
			}
			else if (arr[low] <= arr[mid]) {

				//2 cases-> element on left or right
				if (k >= arr[low] and k <= arr[mid]) {
					high = mid - 1;
				}
				else {
					low = mid + 1;
				}
			}

			else {

				if (k >= arr[mid] and k <= arr[high]) {
					low = mid + 1;

				}
				else {

					high = mid - 1;
				}
			}



		}



		if (flag == 1) {
			cout << mid << endl;
		}
		else {
			cout << -1 << endl;
		}
	}
	return 0;
}