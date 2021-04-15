#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<long long> boys(n), girls(n);
		for (int i = 0; i < n; i++) {
			cin >> boys[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> girls[i];
		}
		// sort the 'boys' vector in non-increasing order
		sort(boys.rbegin(), boys.rend());
		// sort the 'girls' vector in non-decreasing order
		sort(girls.begin(), girls.end());
		auto GetMax = [&](long long a, long long b) {
			return (a > b ? a : b);
		};
		long long likeness_value = LLONG_MIN;
		for (int i = 0; i < n; i++) {
			// get the maximum sum between the two elements in the vector
			// boys[0] + girls[0], boys[1] + girls[1], ..., boys[n - 1] + girls[n - 1]
			likeness_value = GetMax(likeness_value, boys[i] + girls[i]);
		}
		cout << likeness_value << '\n';
	}
	return 0;
}
