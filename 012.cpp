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

	int one = 0;
	int two = n - 1;
	int zero = 0;

	while (one <= two) {

		if (arr[one] == 1) {
			one++;
		}
		else if (arr[one] == 2) {
			swap(arr[one], arr[two--]);
		}
		else if (arr[one] == 0) {

			swap(arr[zero++], arr[two++]);
		}
	}


}
