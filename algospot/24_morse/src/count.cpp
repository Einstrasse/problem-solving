#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int N, M;
ll K;
vector<int> pos;
ll comp[202][202];
void pre();
void go(int i, ll k) {
    if (i == M + 1) return;
    int p = N + i;
    while (k > comp[N + M - p][M - i]) {
        k -= comp[N + M - p][M - i];
        p--;
    }
    pos.push_back(p);
    go(i + 1, k);
}
void print();
int main() {
    int t; cin >> t;
    pre();
    while (t--) {
        cin >> N >> M >> K;
        go(1, K);
        print();
    }
}
void print() {
    pos.push_back(300);
    int j = 0;
    int v = pos[j];
    for (int i = 1; i <= N + M; i++) {
        if (v == i) {
            putchar('o');
            v = pos[++j];
        }
        else {
            putchar('-');
        }
    }
    putchar('\n');
    pos.clear();
}
void pre() {
    for (int i = 0; i <= 200; i++) {
        comp[i][0] = comp[i][i] = 1LL;
    }
    for (int i = 1; i <= 200; i++) {
        for (int j = 0; j < i; j++) {
            comp[i][j] = comp[i - 1][j - 1] + comp[i - 1][j];
        }
    }
}