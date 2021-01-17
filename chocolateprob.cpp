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
		int k;
		cin >> k;
		sort(arr, arr + n);
		int minm = INT_MAX;
		for (int i = 0; i + k - 1 < n; i++) {

			int j =  arr[i + k - 1] - arr[i];
			minm = min(minm, j);

		}
		cout << minm << endl;
	}


}
