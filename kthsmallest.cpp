#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;


int main()
{
	priority_queue<int> pq;
	int n;
	cin >> n;
	int k;
	cin >> k;


	for (int i = 0; i < n; i++)
	{
		int c;
		cin >> c;
		pq.push(c);
	}


	for (int i = 0; i < n - k; i++) {
		pq.pop();

	}

	cout << pq.top();

}
