#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

/*
by looking at the question, I notcie that if i...
- put the length of each of the n planks into a list
- divide each element by k (our target output)
- we are trying to find the maximum k possible that the sum of quotient equals m
*/

int main() {
    int n, m, ub, lb, mid, ans = 0;
    cin >> n >> m;
    vector<long long> a(n); 
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
    }
    lb = 0;
    ub = *max_element(a.begin(), a.end()); 

    while (ub >= lb){
        int sum = 0;
        mid = lb + (ub - lb) / 2;
        transform(a.begin(), a.end(), b.begin(), [mid, &sum](long long x) { 
            int val = x / mid;
            sum += val;
            return val;
         });
         
        if (sum < m){
            ub = mid - 1;
        } else {
            lb = mid + 1;
            ans = mid;
        }
        
    }

    cout << ans << endl;

    return 0;

};


