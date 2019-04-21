#include <bits/stdc++.h>
using namespace std;

char str[100006];
int cnt[100006][30];
int query(int l, int r) {
	if (l == r) return 1;
	int odd = 0;
	// printf("query(%d, %d)\n", l, r);
	for (int i=0; i <= 'Z'-'A'; i++) {
		
		int v = cnt[r][i] - cnt[l-1][i];
		if (v)
			// printf("check for (%c) = %d\n", i+'A', v);
		if (v & 1) odd++;
	}
	return odd <= 1 ? 1 : 0;
}
int main() {
	int tc; cin >> tc;
	for (int t=1; t<=tc; t++) {
		int n, q;
		int ans = 0;
		memset(cnt, 0, sizeof(cnt));
		cin >> n >> q;
		scanf("%s", str+1);
		for (int i=1; i <= n; i++) {
			for (int j=0; j <= 'Z' - 'A'; j++) {
				if (str[i] - 'A' == j) {
					cnt[i][j] = cnt[i-1][j] + 1;
				} else {
					cnt[i][j] = cnt[i-1][j];
				}
			}
		}
		//debug
		// for (int i=1; i <= n; i++) {
		// 	for (int j=0;j < 'Z'-'A'; j++) {
		// 		printf("[%d][%c] = %d\n", i, j+'A', cnt[i][j]);
		// 	}
		// }
		//debug
		while (q--) {
			int l, r;
			cin >> l >> r;
			ans += query(l, r);
		}
		printf("Case #%d: %d\n", t, ans);
	}
	return 0;
}

