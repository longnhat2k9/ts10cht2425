#include<bits/stdc++.h>
using namespace std;

const int M = 1e9;

int main(){
    freopen("emista.inp", "r", stdin);
    freopen("emista.out", "w", stdout);

    long long n, k; cin >> n >> k;
    map<long long, long long>a; long long mx = 0;
    for(long long i = 0; i < n; i++)
    {
        long long x, y; cin >> x >> y; mx = max(mx, x);
        a.insert(make_pair(x, y));
    }

    k = k*2 + 1;
    if(k > M) k = mx;
    long long sum = 0, mxsum;
    for(long long i = 0; i < k; i++)
    {
        sum += a[i];
    }
    mxsum = sum;
    long long l = 0;
    for(long long i = k; i <= mx; i++)
    {
        sum -= a[l];
        sum += a[i];
        mxsum = max(sum, mxsum);
        l++;
    }
    cout << mxsum;
}