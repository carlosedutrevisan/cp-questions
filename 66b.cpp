// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	int n, x = 0, y = 0;
	bool ok = false;
	cin >> n;
	int a[n + 2];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int count = 0;
		for (int x = i + 1; x < n; x++) {
			if (a[x] <= a[x - 1]) count++;
			else break;
		}
		for (int y = i - 1; y >= 0; y--) {
			if (a[y] <= a[y + 1]) count++;
			else break;
		}
		ans = max(ans, count + 1);
	}
	if (n == 1) ans = 1;
	cout << ans << endl;
	return 0;
}