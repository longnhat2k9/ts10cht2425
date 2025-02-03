#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("esum.inp", "r", stdin);
    freopen("esum.out", "w", stdout);

    int n; cin >> n;
    long long le = 0, chan = 0;
    for(int i = 0; i < n; i++) 
    {
        int x; cin >> x;
        if(x % 2 == 0) chan++;
        else le++;
    }

    if(le % 2 == 0) cout << (le * (le - 1))/2 +  (chan * (chan - 1))/2;
    else cout << le * chan;
}