//rotate array by k elements

#include <iostream>
#include<vector>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vector<int> a(n, 0);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}


		int temp = n - (k % n);
		k = temp;
		while (temp < n) {
			cout << a[temp] << " ";
			temp++;
		}
		for (int i = 0; i < k; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}



}