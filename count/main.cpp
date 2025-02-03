#include<bits/stdc++.h>
using namespace std;

const int MAX = 1e6 + 5;
int uoc[MAX];

void tinhuoc() {
    for (int i = 1; i < MAX; i++) {
        for (int j = i; j < MAX; j += i) {
            uoc[j]++;
        }
    }
}

int main() {
    freopen("count.inp", "r", stdin);
    freopen("count.out", "w", stdout);

    tinhuoc();

    int n; cin >> n;
    int mx = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        mx = max(mx, uoc[x]);
    }

    cout << mx;
    return 0;
}