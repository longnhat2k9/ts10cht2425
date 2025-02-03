#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("pay.inp", "r", stdin);
    freopen("pay.out", "w", stdout);

    long long a, b, c, d, n; 
    cin >> a >> b >> c >> d >> n;

    long long mon = 0;
    
    mon += min(n, 50ll) * a;
    if(n > 50) mon += min(n - 50, 50ll) * b;
    if(n > 100) mon += min(n - 100, 100ll) * c;
    if(n > 200) mon += (n - 200) * d;

    cout << mon;
}