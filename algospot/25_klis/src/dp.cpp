#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = (int)2e9 + 1;
int N;
ll K;
int S[505];
int dpLen[505];
ll dpCnt[505];
int getLISLen(int index) {
    auto& ret = dpLen[index];
    if (ret != -1) {
        return ret;
    }
    ret = 1;
    for (int next = index + 1; next <= N; next++) {
        if (index == 0 || S[index] < S[next]) {
            ret = max(ret, getLISLen(next) + 1);
        }
    }
    return ret;
}
ll getCount(int index) {
    auto& ret = dpCnt[index];
    if (ret != -1) return ret;
    if (getLISLen(index) == 1) return ret = 1;
    ret = 0;
    for (int next = index + 1; next <= N; next++) {
        if ((index == 0 || S[index] < S[next]) && (getLISLen(index) == getLISLen(next) + 1)) {
            ret = min<ll>(MAX, ret + getCount(next));
        }
    }
    return ret;
}
void reconstruct(int index, int skip, vector<int>& ans) {
    vector<pair<int, int> > followers;
    for (int next = index + 1; next <= N; next++) {
        if ((index == 0 || S[index] < S[next]) 
            && getLISLen(index) == getLISLen(next) + 1) {
            followers.push_back(make_pair(S[next], next));
        }
    }
    sort(followers.begin(), followers.end());
    for (auto& follower : followers) {
        if (getCount(follower.second) <= skip) {
            skip -= getCount(follower.second);
        }
        else {
            ans.push_back(follower.first);
            reconstruct(follower.second, skip, ans);
            break;
        }
    }
}
void solve() {
    cin >> N >> K;
    vector<int> ans;
    memset(dpLen, -1, sizeof(dpLen));
    memset(dpCnt, -1, sizeof(dpCnt));
    for (int i = 1; i <= N; i++) {
        cin >> S[i];
    }
    getLISLen(0);
    getCount(0);
    reconstruct(0, K - 1, ans);
    cout << ans.size() << '\n';
    for (int v : ans) {
        cout << v << ' ';
    }
    ans.clear();
    cout << endl;
}
int main() {
    int tc; cin >> tc;
    while (tc--) {
        solve();
    }
}