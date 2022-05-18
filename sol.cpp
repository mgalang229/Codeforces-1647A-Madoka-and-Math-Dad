#include <bits/stdc++.h>

using namespace std;

void printVector(vector<int> res) {
	for (auto& x : res) {
		cout << x;
	}
	cout << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		//1 1 1 1 1 = 5
		//2 1 2
		
		//1 1 1 1 = 4
		//1 2 1 = 4
		
		//1 1 1 1 1 1 = 6
		//1 2 1 2 = 6
		
		int n;
		cin >> n;
		int copy_n = n;
		int temp = n;
		if (n == 1) {
			cout << 1 << '\n';
			continue;
		} else if (n == 2) {
			cout << 2 << '\n';
			continue;
		}
		int a[2] = {1, 2};
		int sum1 = 0;
		vector<int> res1;
		for (int i = 0; n > 0; i++) {
			sum1 += a[i % 2];
			//cout << a[i % 2];
			n -= a[i % 2];
			res1.push_back(a[i % 2]);
		}
		a[0] = 2;
		a[1] = 1;
		int sum2 = 0;
		vector<int> res2;
		for (int i = 0; copy_n > 0; i++) {
			//cout << a[i % 2];
			sum2 += a[i % 2];
			copy_n -= a[i % 2];
			res2.push_back(a[i % 2]);
		}
		if (sum1 == temp && sum2 == temp) {
			if (sum1 > sum2) {
				printVector(res1);
			} else {
				printVector(res2);
			}
		} else if (sum1 == temp) {
			printVector(res1);
		} else {
			printVector(res2);
		}
	}
	return 0;
}
