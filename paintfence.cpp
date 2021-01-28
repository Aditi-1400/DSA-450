#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends

#define mod 1000000007


class Solution {
public:


    long long helper(int n, int k) {

        if (n == 1) {
            return k;
        }

        if ( n == 2) {
            return k * k;
        }

        long long int diff = k * (k - 1);
        long long int same = k;
        long long int total = same + diff;

        for (int i = 3; i <= n; i++) {

            same = diff;
            diff = (total * (k - 1));
            total = (same + diff) % mod;
        }

        return total;

    }
    long long countWays(int n, int k) {


        return helper(n, k);
    }
};

// { Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        Solution ob;
        cout << ob.countWays(n, k) << endl;
    }
    return 0;
}  // } Driver Code Ends