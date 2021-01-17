#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends




// function to find the trapped water in between buildings
// arr: input array
// n: size of array
int trappingWater(int arr[], int n) {

    vector<pair<int, int>>vec(n);
    int maxtillnow = INT_MIN;
    for (int i = 0; i < n; i++) {

        maxtillnow = max(arr[i], maxtillnow);
        vec[i].first = maxtillnow;
    }
    maxtillnow = INT_MIN;
    for (int j = n - 1; j >= 0; j--) {

        maxtillnow = max(arr[j], maxtillnow);
        vec[j].second = maxtillnow;
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {

        sum = sum + min(vec[i].first, vec[i].second) - arr[i];
    }

    return sum;
}

// { Driver Code Starts.

int main() {

    int t;
    //testcases
    cin >> t;

    while (t--) {
        int n;

        //size of array
        cin >> n;

        int a[n];

        //adding elements to the array
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        //calling trappingWater() function
        cout << trappingWater(a, n) << endl;

    }

    return 0;
}  // } Driver Code Ends