#include<bits/stdc++.h>
using namespace std;
int matrix[100][100];
int maxGold(int matrix[100][100], int m, int n) {



	for (int i = 1; i < m; i++) {

		for (int j = 1; j < n; j++) {

			matrix[i][j] = matrix[i][j] + max(matrix[i][j - 1], max(matrix[i - 1][j - 1], matrix[i + 1][j - 1]));
		}
	}

	int maxm = INT_MIN;

	for (int i = 0; i < n; i++) {
		maxm = max(matrix[n - 1][i], maxm);
	}

	return maxm;

}

int main() {

	int m; int n;
	cin >> m >> n;


	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {

			cin >> matrix[i][j];
		}
	}

	cout << maxGold(matrix, m, n);
}