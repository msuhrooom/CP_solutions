// Educational Codeforces Round 93 (Rated for Div. 2)
// Question 1398B - B. Substring Removal
#include <bits/stdc++.h>

using namespace std;

#define sz(a) int((a).size())
#define forn(i, n) for (int i = 0; i < int(n); ++i)

// 1. find the length of sublist of '1's. 
// 011100101011 -> [3,1,1,2]
// 2. Calculate Alice's score by iterates through the *sorted* length list
// [6,4,2,1,1,1] -> 6 + 2 + 1 = 9

void solve() {
	string s;
	cin >> s;
	vector<int> a;

	//find the length of sublist of '1's
	forn(i, sz(s)) if (s[i] == '1') {
		int j = i;
		while (j + 1 < sz(s) && s[j + 1] == '1')
			++j;
		a.push_back(j - i + 1);
		i = j;
	}

	// sort the list
	sort(a.rbegin(), a.rend());

	//Calculate Alice's score
	int ans = 0;
	for (int i = 0; i < sz(a); i += 2)
		ans += a[i];
	cout << ans << endl;
}

int main() {
	int T;
	cin >> T;
	while (T--) solve();
}
    
