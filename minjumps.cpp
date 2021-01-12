

// } Driver Code Ends


// Function to return minimum number of jumps to end of array
int minJumps(int arr[], int n) {

    //arr = 2 3 1 1 2 4 2 0 1 1

    int jumps = 1;

    // jumps = 2

    int maxb = INT_MIN;

    //maxb = 4

    int balance = arr[0];

    //balance = 3
    if (arr[0] == 0) {
        return -1;
    }
    for ( int i = 1; i < n; i++) {
        if (i == n - 1)
            return jumps;
        if (arr[i] + i > maxb) {
            maxb = arr[i] + i;
        }

        balance--;

        if (balance == 0) {

            jumps++;
            balance = maxb - i;
        }

        if (i >= maxb) {
            return -1;
        }

    }


}


// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << minJumps(arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends