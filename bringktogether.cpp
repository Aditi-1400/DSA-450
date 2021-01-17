// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <iostream>
using namespace std;


int minSwap(int *arr, int n, int k);

// Driver code
int main() {

  int t, n, k;
  cin >> t;
  while (t--)
  {
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    cin >> k;
    cout << minSwap(arr, n, k) << "\n";
  }
  return 0;
}
// } Driver Code Ends

#include<climits>
int minSwap(int *arr, int n, int k) {

  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] <= k) {
      cnt++;
    }
  }
  int bad = 0;
//  int min = INT_MAX;
  for (int i = 0; i < cnt; i++) {
    if (arr[i] > k) {
      bad++;
    }
  }
  int min = bad;
  for (int j = cnt, i = 0; j < n; i++, j++) {

    if (arr[j] > k) {
      ++bad;
    }
    if (arr[i] > k) {
      bad--;
    }

    if (bad < min) {
      min = bad;
    }
  }

  return min;
}
