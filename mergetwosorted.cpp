#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


//User function template for C++
class Solution {
public:

	int getNextGap(int n) {

		if (n > 1) {
			return (n / 2 + n % 2);
		}
		return 0;
	}
	void merge(int arr1[], int arr2[], int n, int m) {

		int gap = getNextGap(n + m);

		while (gap > 0) {
			int i = 0;
			for (i = 0; i + gap < n; i++) {



				if (arr1[i] > arr1[i + gap])
				{
					swap(arr1[i], arr1[i + gap]);
				}


			}

			int j;
			for (j = gap > n ? gap - n : 0; i < n && j < m; i++, j++) {

				if (arr1[i] > arr2[j]) {
					swap(arr1[i], arr2[j]);
				}
			}

			for (j = 0; j + gap < m; j++) {

				if (arr2[j] > arr2[j + gap]) {
					swap(arr2[j], arr2[j + gap]);
				}
			}

			gap = getNextGap(gap);
		}



	}
};

// { Driver Code Starts.
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m, i;
		cin >> n >> m;
		int arr1[n], arr2[m];
		for (i = 0; i < n; i++) {
			cin >> arr1[i];
		}
		for (i = 0; i < m; i++) {
			cin >> arr2[i];
		}
		Solution ob;
		ob.merge(arr1, arr2, n, m);
		for (i = 0; i < n; i++) {
			cout << arr1[i] << " ";
		}
		for (i = 0; i < m; i++) {
			cout << arr2[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends