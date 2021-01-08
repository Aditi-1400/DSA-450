#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;


int main()
{

	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int maxm = INT_MIN;
	int minm = INT_MAX;
	for (int i = 0; i < n; i++) {

		maxm = max(arr[i], maxm);
		minm = min(arr[i], minm);
	}

	cout << maxm << " " << minm << endl;

}



