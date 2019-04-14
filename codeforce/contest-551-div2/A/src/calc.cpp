#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    int ans = 0;
    long long val = (long long)1e12+5LL;
    for (int i=1; i <= n; i++) {
        long long s, d;
        cin >> s >> d;
        long long k = max(0LL, (t-s+d-1)/d);
        long long v = s + d*k;
        if (v < val) {
            val = v;
            ans = i;
        }
    }
    cout << ans << endl;
	return 0;
}

