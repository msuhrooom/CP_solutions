#include <bits/stdc++.h>

using namespace std;
typedef long long LL;
map<LL,LL> m;

int main() {

    int n;
    LL c;
    LL ans = 0;
	cin >> n >> c ;
    LL arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        m[arr[i]]++;
        arr[i]+=c;
    };

    for (int i = 0; i < n; ++i) {
        ans += m[arr[i]];
    }
    cout << ans << endl;
    return 0;
}
