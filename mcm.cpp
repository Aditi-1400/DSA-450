#include<bits/stdc++.h>

using namespace std;


int dp[101][101];
int maxCoinsHelper(vector<int> nums, int n, int i, int j) {
	int ans = INT_MAX;

	if (i == j) {
		return 0;
	}

	if (dp[i][j] != -1)
		return dp[i][j];

	else {
		ans = INT_MAX;
		for (int k = i; k < j; k++) {

			int temp = maxCoinsHelper(nums, n, i, k) + maxCoinsHelper(nums, n, k + 1, j) + nums[i - 1] * nums[k] * nums[j];
			ans = min(ans, temp);
		}
	}

	return dp[i][j] = ans;

}
int maxCoins(vector<int>& nums) {


	int n = nums.size();
	memset(dp, -1, sizeof dp);
	return maxCoinsHelper(nums, n, 1, n - 1);

}

int main() {


	int n;
	cin >> n;
	std::vector<int>matrix(n);
	for (int i = 0; i < n; i++) {
		cin >> matrix[i];
	}

	cout << maxCoins(matrix);

}