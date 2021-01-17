#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


// function to find the triplet which sum to x
// arr[] : The input Array
// N : Size of the Array
// X : Sum which you need to search for

bool find3Numbers(int arr[], int N, int X)
{
  int count = 0;
  map<int, int> mp;
  for (int i = 0; i < N; i++) {
    mp[arr[i]]++;

  }
  for (int i = 0; i < N; i++) {
    int k = X - arr[i];
    for (int j = i + 1; j < N; j++) {
      int num = k - arr[j];
      count += mp[num];

      if (arr[j] == num) {
        count--;
      }
    }
    if (count > 0) {
      return true;
    }

  }
  return false;
}


// { Driver Code Starts.

int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int N, sum;
    cin >> N >> sum;
    int i, A[N];
    for (i = 0; i < N; i++)
      cin >> A[i];
    cout <<  find3Numbers(A, N, sum) << endl;
  }
}
// } Driver Code Ends