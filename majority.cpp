#define int long long int
vector<int>vec(1000000, 0);
int32_t main() {
	int t;
	cin >> t;
	while (t--)
	{

		int n;
		cin >> n;
		int l = n;
		int a[n];
		if (n % 2 == 0)
			n = n / 2;
		else
			n = (n + 1) / 2 - 1;
		for (int i = 0; i < l; i++)
		{
			int k;
			cin >> k;
			vec[k]++;
		}
		int i;
		for (i = 0; i < 1000000; i++)
		{
			if (vec[i] > (n))
			{
				cout << i << endl;
				break;

			}
			//cout<<vec[i];
		}

		if (i == 1000000)
			cout << -1 << endl;
		for (int i = 0; i < 100000; i++)
			vec[i] = 0;

	}
	return 0;
}