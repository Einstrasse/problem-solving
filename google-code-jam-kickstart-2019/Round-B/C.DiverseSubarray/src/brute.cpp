#include <bits/stdc++.h>
using namespace std;

set<int> ss;
map<int, int> mm;
int A[1005];
int S[1005][1005]; // S[val][index]
int test(int l, int r, int s,int n) {
	int ret = 0;
	for (int v=0; v < n; v++) {
		int cnt = S[v][r] - S[v][l-1];
		if (cnt <= s) ret += cnt;
	}
	return ret;
}
int main() {
	int tc; cin >> tc;
	for (int t=1; t<=tc; t++) {
		int n, s;
		int ans = 0;
		ss.clear();
		mm.clear();
		memset(S, 0, sizeof(S));
		cin >> n >> s;
		for (int i=1; i<= n; i++) {
			cin >> A[i];
			ss.insert(A[i]);
		}
		int c = 0;
		for (auto& v : ss) {
			mm[v] = c++;
		}
		for(int i=1; i <= n; i++) {
			A[i] = mm[A[i]];
			S[A[i]][i]++;
		}
		for (int i=1; i <=n; i++) {
			for (int j=0;j < n; j++) {
				S[j][i] += S[j][i-1];
			}
		}
		
		for (int i=1; i <= n; i++) {
			for( int j=i; j <=n; j++) {
				ans = max(ans, test(i,j,s,n));
			}
		}
		printf("Case #%d: %d\n", t, ans);
	}
	return 0;
}

