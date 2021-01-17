using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int number[n];

		for (int i = 0; i < n; i++) {

			cin >> number[i];
		}
		//1 2 7 8 6 5 4
		int i, j;

		// I) Start from the right most digit and find the first digit that is
		// smaller than the digit next to it.
		for (i = n - 1; i > 0; i--)
			if (number[i] > number[i - 1])
				break;

		// If no such digit is found, then all digits are in descending order
		// means there cannot be a greater number with same set of digits
		if (i == 0)
		{
			reverse(number, number + n);
			for (int i = 0; i < n; i++) {
				cout << number[i] << " ";

			}
			cout << endl;
			continue;
		}

		// II) Find the smallest digit on right side of (i-1)'th digit that is
		// greater than number[i-1]
		int x = number[i - 1], smallest = i;
		for (j = i + 1; j < n; j++)
			if (number[j] > x && number[j] < number[smallest])
				smallest = j;

		// III) Swap the above found smallest digit with number[i-1]
		swap(number[smallest], number[i - 1]);

		// IV) Sort the digits after (i-1) in ascending order
		sort(number + i, number + n);
		for (int i = 0; i < n; i++) {
			cout << number[i] << " ";
		}
		cout << endl;
	}
	return 0;
}