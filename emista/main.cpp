#include<bits/stdc++.h>
using namespace std;

const int M = 1e9;

int main(){
    freopen("emista.inp", "r", stdin);
    freopen("emista.out", "w", stdout);

    long long n, k; cin >> n >> k;
    vector<pair<long long, long long>>a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }

    sort(a.begin(), a.end());

    int l = 0;
    long long mx, sum; mx = sum = 0;
    k = 2*k;
    
    for(int r = 0; r < n; r++)
    {
        sum += a[r].second;

        while(a[r].first - a[l].first > k)
        {
            sum -= a[l].second;
            l++;
        }

        mx = max(sum, mx);
    }

    cout << mx;
}