#include <bits/stdc++.h>
using namespace std;

struct Node {
    char c;
    int cnt;
    int next[30];
    int prev;
    Node() {
        c = 'A';
        cnt = prev = 0;
        for (int i=0; i <= 'Z'-'A'; i++) {
            next[i] = 0;
        }
    }
    void clear() {
        c = 'A';
        cnt = prev = 0;
        for (int i=0; i <= 'Z'-'A'; i++) {
            next[i] = 0;
        }
    }
};
int ans;
Node nodes[1300005]; // nodes[0] = Root Node
void dfs(int idx) {
    auto& node = nodes[idx];
    // if (idx) {
    //     cout << node.c << '(' << node.cnt << ')' << endl;
    // }
    for (int i=0; i <= 'Z' - 'A'; i++) {
        if (node.next[i]) {
            dfs(node.next[i]);
        }
    }
    if (node.cnt >= 2) {
        // printf("%c found = %d\n", node.c, node.cnt);
        ans += 2;
        int p = idx;
        while (p) {
            // printf("dec of %d th node (%c), %d\n", p, nodes[p].c, nodes[p].cnt);
            nodes[p].cnt -= 2;
            p = nodes[p].prev;
        }
    }
}
int main() {
    int Tc; cin >> Tc;
    for (int T=1; T<=Tc; T++) {
        ans = 0;
        int alloc = 0;
        int N; cin >> N;
        for (int i=0; i < 1300000; i++) {
            nodes[i].clear();
        }
        for (int i=0; i < N; i++) {
            int prev = 0;
            string s;
            cin >> s;
            for (int i=s.length()-1; i>=0; i--) {
                char c = s[i];
                int& idx = nodes[prev].next[c-'A'];
                if (idx == 0) {
                    Node* new_node = &nodes[++alloc];
                    idx = alloc;
                    new_node->c = c;
                    new_node->cnt = 1;
                    new_node->prev = prev;
                    prev = idx;
                } else {
                    Node* cur_node = &nodes[idx];
                    cur_node->cnt++;
                    prev = idx;
                }
            }
        }
        dfs(0);
        printf("Case #%d: %d\n", T, ans);
        // cout << ans << endl;
    }
	return 0;
}

