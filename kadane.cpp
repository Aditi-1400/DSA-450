

// } Driver Code Ends


// Function to find subarray with maximum sum
// arr: input array
// n: size of array
int maxSubarraySum(int arr[], int n) {

    int maxsum = INT_MIN;
    int sum_till_now = 0;

    for (int i = 0; i < n; i++) {

        sum_till_now += arr[i];
        if (sum_till_now > maxsum) {

            maxsum = sum_till_now;
        }
        if (sum_till_now < 0) {
            sum_till_now = 0;
        }

    }
    return maxsum;

}

// { Driver Code Starts.

int main()
{
    int t, n;

    cin >> t; //input testcases
    while (t--) //while testcases exist
    {

        cin >> n; //input size of array

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i]; //inputting elements of array

        cout << maxSubarraySum(a, n) << endl;
    }
}
// } Driver Code Ends