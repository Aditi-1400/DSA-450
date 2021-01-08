#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		cout << arr[n - 1] << " ";
		for (int i = 0; i < n - 1; i++) {

			cout << arr[i] << " ";
		}
		cout << endl;


	}


}
