#include<bits/stdc++.h>

using namespace std;

float round1(float var)
{

	float value = (int)(var * 100 + .5);
	return (float)value / 100;
}


int main() {

	int t;
	cin >> t;
	while (t--) {

		float k1, k2, k3, v;
		cin >> k1 >> k2 >> k3 >> v;

		float k = 100 / (k1 * k2 * k3 * v);

		if (round1(k) < 9.58f) {
			cout << "YES" << endl;
		}

		else {
			cout << "NO" << endl;
		}


	}
}