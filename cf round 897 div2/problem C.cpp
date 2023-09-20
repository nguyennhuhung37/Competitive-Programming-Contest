#include <iostream>
#include <vector>

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> s(n);
	for (int i = 0; i < n; ++i)
		cin >> s[i];
	int mex = -1;
	for (int i = 0; i < n; ++i) {
		if (i == 0 && s[i] != 0) {
			mex = 0;
			break;
		}
		if (i > 0 && s[i] != s[i - 1] + 1) {
			mex = s[i - 1] + 1;
			break;
		}
	}
	if (mex == -1)
		mex = s[n - 1] + 1;
	cout << mex << endl;
	int y;
	cin >> y;
	while (y != -1) {
		cout << y << endl;
		cin >> y;
	}
}

int main() {
	int t;
	cin >> t;
	while (t--)
		solve();

	return 0;
}
