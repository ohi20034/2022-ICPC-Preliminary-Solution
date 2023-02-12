#include<bits/stdc++.h>
using namespace std;
#define int long long
//#define _ohi_ ios::sync_with_stdio(false);cin.tie(0),cin.tie(0);
#define bug(x) cout << #x << "  " << x << '\n';
const int MOD = 1e9 + 7;
const int MAX = 1e6;
int32_t main()
{
    int t, i = 1;
    cin>>t;
    while(t--)
    {
        int arr[3], k, sum = 0;
        for(int j = 0; j < 3; j++)
        {
            cin>>arr[j];
            sum += arr[j];
        }
        cin>>k;
        sort(arr, arr + 3);
        if(sum % 3 == 0 && arr[0] == arr[2])
        {
            cout<<"Case "<<i<<": "<<"Peaceful"<<"\n";
        }
        else if(sum % 3 == 0)
        {
            int m = sum / 3;
            if((arr[0] < k && arr[1] < k) || (arr[1] < k && arr[2] < k) || (arr[0] < k && arr[2] < k))
            {
                cout<<"Case "<<i<<": "<<"Fight"<<"\n";
            }
            else if((abs(m - arr[0])) % k == 0 && (abs(m - arr[1])) % k == 0 && (abs(m - arr[2])) % k == 0)
            {
                cout<<"Case "<<i<<": "<<"Peaceful"<<"\n";
            }
            else
            {
                cout<<"Case "<<i<<": "<<"Fight"<<"\n";
            }
        }
        else
            cout<<"Case "<<i<<": "<<"Fight"<<"\n";
        i++;
    }

}

