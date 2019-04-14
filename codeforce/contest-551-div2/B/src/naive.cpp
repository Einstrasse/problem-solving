#include <bits/stdc++.h>
using namespace std;

int front[105], side[105], field[105][105];
int main() {
    int n, m, h;
    cin >> n >> m >> h;
    for (int i=0; i < m; i++) cin >> front[i];
    for (int i=0; i < n; i++) cin >> side[i];
    for (int i=0; i < n; i++) {
        for (int j=0; j < m; j++) {
            cin >> field[i][j];
        }
    }
    for (int i=0; i < n; i++) {
        for (int j=0;j < m; j++) {
            if (field[i][j]) {
                if (side[i] == front[j]) {
                    field[i][j] = side[i];
                }
            }
        }
    }
    
    //side fix
    for (int i=0; i < n; i++) {
        int v = 0; //side max
        for (int j=0; j < m; j++) {
            v = max(v, field[i][j]);
        }
        if (v < side[i]) {
            for (int j=0; j <m; j++) {
                if (field[i][j] && front[j] >= side[i]) {
                    field[i][j] = side[i];
                    break;
                }
            }
        }
    }
    //front fix
    for (int j=0; j < m; j++) {
        int v = 0; //front max
        for (int i=0; i < n; i++) {
            v = max(v, field[i][j]);
        }
        if (v < front[j]) {
            for (int i=0; i < n; i++) {
                if (field[i][j] && side[i] >= front[j]) {
                    field[i][j] = front[j];
                    break;
                }
            }
        }
    }
    
    for (int i=0; i < n; i++) {
        for (int j=0; j < m; j++) {
            cout << field[i][j] << ' ';
        }
        cout << '\n';
    }
    
	return 0;
}

