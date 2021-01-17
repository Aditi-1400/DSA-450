#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends


//User function template for C++
class Solution {
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
		long long maxi = 1, mini = 1;
		long long product = 1;
		for (int i = 0; i < n; i++) {
			if (arr[i] < 0) {
				swap(maxi, mini);

			}


			mini = min(mini * arr[i], 1LL);
			maxi = max(maxi * arr[i], 1LL);
			product = max(maxi, product);

		}

		return product;
	}
};

// { Driver Code Starts.

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, i;
		cin >> n;
		int arr[n];
		for (i = 0; i < n; i++) {
			cin >> arr[i];
		}
		Solution ob;
		auto ans = ob.maxProduct(arr, n);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends