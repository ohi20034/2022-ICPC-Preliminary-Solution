#include <bits/stdc++.h>
using namespace std;
#define int long long
//#define _ohi_ ios::sync_with_stdio(false);cin.tie(0),cin.tie(0);
#define bug(x) cout << #x << "  " << x << '\n';
const int MOD = 1e9 + 7;
const int MAX = 1e6;
int32_t main()
{
    //_ohi_
    int t;
    cin >> t;
    for(int tc=1; tc<=t; ++tc)
    {
        int n,k;
        cin >> n >> k;
        int ar[n];
        int mx = INT_MIN;
        int sum = 0;
        for(int i=0; i<n; ++i)
        {
            cin >> ar[i];
            sum += ar[i];
            mx = max(ar[i],mx);
        }
        k--;
        int ans = mx * k;
        ans+=sum;
        cout << "Case "<<tc<<": "<<ans<<'\n';
    }
}

