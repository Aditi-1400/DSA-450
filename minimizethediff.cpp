
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends





//User function template for C++


class Solution {
public:
    int getMinDiff(int arr[], int n, int k) {

        vector<pair<int, int>> vec;
        int elements = 0;
        int left = 0;
        int right = 0;
        vector<int> vis(n, 0);

        for (int i = 0; i < n; i++) {

            if (arr[i] >= k) {

                vec.push_back(make_pair(arr[i] - k, i));
            }

            vec.push_back(make_pair(arr[i] + k, i));
        }
        sort(vec.begin(), vec.end());
        while (elements < n && right < vec.size()) {

            if (vis[vec[right].second] == 0) {
                elements++;
            }

            vis[vec[right].second]++;
            right++;

        }

        int ans = vec[right - 1].first - vec[left].first;

        while (right < vec.size()) {

            if (vis[vec[left].second] == 1) {
                elements--;
            }
            vis[vec[left].second]--;

            left++;

            while (elements < n && right < vec.size()) {
                if (vis[vec[right].second] == 0) {
                    elements++;
                }

                vis[vec[right].second]++;
                right++;
            }
            if (elements == n) {
                ans = min(ans, vec[right - 1].first - vec[left].first);
            }
            else {
                break;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends