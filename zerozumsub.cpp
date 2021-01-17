// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;


bool subArrayExists(int arr[], int n);
// Driver code
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    if (subArrayExists(arr, n))
      cout << "Yes\n";
    else
      cout << "No\n";
  }
  return 0;
}// } Driver Code Ends


//Complete this function
bool subArrayExists(int arr[], int n)
{
  int csum[n] = {0};
  csum[0] = arr[0];

  map<int, int> freq;
  freq[csum[0]]++;
  for (int i = 1; i < n; i++) {

    if (arr[i] == 0) {
      return true;
    }
    csum[i] = csum[i - 1] + arr[i];

    if (freq[csum[i]] > 0) {
      return true;
    }

    else if (csum[i] == 0) {
      return true;
    }

    else {
      freq[csum[i]]++;
      //  cout<<csum[i];
    }
  }

  return false;


}


