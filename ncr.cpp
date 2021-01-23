// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


// User function Template for C++
#define mod 1000000007;
class Solution {
public:
    int nCr(int n, int r) {


        if (r > n) {
            return 0;
        }

        if (r == n || r == 0) {
            return 1;
        }

        else {

            int dp[n + 1];
            memset(dp, 0, sizeof(dp));
            dp[0] = 1;
            for (int i = 1; i <= n; i++) {

                for (int j = min(i, r); j >= 0; j--) {

                    dp[j] = (dp[j - 1]  + dp[j]) % mod;
                }
            }

            return dp[r];

        }





    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, r;
        cin >> n >> r;

        Solution ob;
        cout << ob.nCr(n, r) << endl;
    }
    return 0;
}  // } Driver Code Ends