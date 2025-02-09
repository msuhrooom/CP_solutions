#include <bits/stdc++.h>

using namespace std;


void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    int distance = abs(a - b);

    if (distance % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
	int T;
	cin >> T;
	while (T--) solve();
}