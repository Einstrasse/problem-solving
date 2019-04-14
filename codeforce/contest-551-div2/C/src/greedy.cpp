#include <bits/stdc++.h>
using namespace std;

void nope() {
    cout << ":(";
    exit(EXIT_SUCCESS);
}

int main() {
    int N;
    string str;
    cin >> N >> str;
    if (N & 1) nope();
    int up, down, mine;
    int my_up, my_down;
    up = down = 0;
    for (char c : str) {
        if (c == '(') up++;
        else if (c == ')') down++;
    }
    mine = N - up - down;
    my_up = N/2 - up;
    my_down = N/2 - down;
    if (up > N/2 || down > N/2) nope();
    for (char& c : str) {
        if (c == '?') {
            if (my_up > 0) {
                c = '(';
                my_up--;
            } else {
                c = ')';
                my_down--;
            }
        }
    }
    int v = 0;
    for (int i=0; i < N; i++) {
        char& c = str[i];
        if (c == '(') {
            v++;
        } else {
            v--;
        }
        if (i != N-1 && v<=0) nope();
    }
    cout << str << endl;
	return 0;
}

