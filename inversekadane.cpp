#include<bits/stdc++.h>

using namespace std;



int smallestSumSubarr(int *arr, int n) {

	int mintill = INT_MAX;
	int minpresent = 0;
	for (int i = 0; i < n; i++) {

		minpresent += arr[i];

		if (minpresent > 0)
			minpresent = arr[i];

		mintill = min(mintill, minpresent);
	}

	return mintill;
}


int main()
{
	int arr[] = {3, -4, 2, -3, -1, 7, -5};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Smallest sum: "
	     << smallestSumSubarr(arr, n);
	return 0;
}