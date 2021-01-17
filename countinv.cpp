
#include<bits/stdc++.h>

using namespace std;

int merge(long long int *arr, int start, int end) {
    int i = start;
    int mid = (start + end) / 2;
    int j = mid + 1;
    int k = start;
    int temp[end - start + 1];
    int inv = 0;
    while (i <= mid && j <= end) {

        if (arr[i] > arr[j]) {

            temp[k++] = arr[j++];
            inv += (mid - i);
        }

        if (arr[i] <= arr[j]) {

            temp[k++] = arr[i++];

        }

    }

    if (i < mid) {

        while (i <= mid)
            temp[k++] = arr[i++];
    }

    if (j < end) {
        while (j <= end) {
            temp[k++] = arr[j++];
        }
    }


    for (int a = start; a <= end; a++) {

        arr[a] = temp[a];
    }

    return inv;
}

int quicksort(long long int *arr, int start, int end) {

    int mid = 0, inv = 0;
    if (start < end) {



        int mid = (start + end) / 2;
        inv += quicksort(arr, 0, mid);
        inv += quicksort(arr, mid + 1, end);
        inv += merge(arr, start, end);

    }

    return inv;
}

long long int inversionCount(long long arr[], long long N)
{
    long long int inv = 0LL;
    return quicksort(arr, 0, N - 1);

}


int main() {

    long long T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;

        long long A[N];
        for (long long i = 0; i < N; i++) {
            cin >> A[i];
        }

        cout << inversionCount(A, N) << endl;
    }

    return 0;

}