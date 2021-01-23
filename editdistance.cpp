
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends






int dp[1001][1001];




class Solution
{
public:


	int editdistancehelper(string s, string t, int m, int n) {

		if (m == -1) return n + 1;
		else if ( n == -1) return m + 1;


		if (dp[m][n] != -1) return dp[m][n];

		if (s[m] == t[n]) return dp[m][n] = editdistancehelper(s, t, m - 1, n - 1);


		int a = editdistancehelper(s, t, m - 1, n - 1);
		int b = editdistancehelper(s, t, m, n - 1);
		int c = editdistancehelper(s, t, m - 1, n);

		dp[m][n] = 1 + min(min(a, b), c);

		return dp[m][n];
	}


	int editDistance(string s, string t)
	{
		memset(dp, -1, sizeof(dp));
		int m = s.length();
		int n = t.length();

		return editdistancehelper(s, t, m - 1, n - 1);


	}
};


// { Driver Code Starts.
int main() {
	int T;
	cin >> T;
	while (T--)
	{
		string s, t;
		cin >> s >> t;
		Solution ob;
		int ans = ob.editDistance(s, t);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends