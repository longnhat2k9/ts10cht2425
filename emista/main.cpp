#include<bits/stdc++.h>
using namespace std;

const int M = 1e6;
const int N = 1e5;

void cs1(long long &n, long long &k)
{
    vector<pair<long long, long long>>a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }

    sort(a.begin(), a.end());

    int l = 0;
    long long mx, sum; mx = sum = 0;
    
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

void cs2(long long &n, long long &k)
{
    vector<long long>a(M, 0); long long mxn = 0;
    for(int i = 0; i < n; i++)
    {
        long long x, y; cin >> x >> y;
        a[x] = y; mxn = max(mxn, x);
    }

    k++;

    long long sum = 0, mx = 0;
    for(int i = 0; i < k; i++) sum += a[i];
    mx = sum;

    for(int i = k; i <= mxn; i++)
    {
        sum -= a[i - k];
        sum += a[i];
        mx = max(sum, mx);
    }

    cout << mx;
}

int main(){
    freopen("emista.inp", "r", stdin);
    freopen("emista.out", "w", stdout);

    long long n, k; cin >> n >> k;
    k = 2*k;

    if(n <= N) cs1(n, k);
    else cs2(n, k);
}