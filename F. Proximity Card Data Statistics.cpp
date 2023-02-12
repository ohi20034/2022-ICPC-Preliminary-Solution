#include <bits/stdc++.h>
using namespace std;
#define int long long
// #define _ohi_ ios::sync_with_stdio(false);cin.tie(0),cin.tie(0);
#define bug(x) cout << #x << "  " << x << '\n';
const int MOD = 1e9 + 7;
const int MAX = 1e6;
int32_t main()
{
    //_ohi_
    int n;
    cin >> n;
    map<string,pair<int,string>> mp;
    map<string,tuple<int,int,int>> a1;
    map<string,tuple<int,int,int>> a2;
    while(n--)
    {
        int day, month, year, hour, minn, sec, h, g, i, j;
        string s1, s2;
        char x;
        cin >> day >> x >> month >> x >> year >> x >> hour >> x >> minn >> x >> sec >> s1 >> h >> x >> i >> x >> j >> s2;
        if (mp.find(s1) == mp.end())
        {
            a1[s1] = {year, month, day};
            a2[s1] = {hour, minn, sec};
            mp[s1] = {j, s2};
        }
        else
        {
            int y, mn, d;
            int h, m, s;
            y = get<0>(a1[s1]);
            mn = get<1>(a1[s1]);
            d = get<2>(a1[s1]);

            h = get<0>(a2[s1]);
            m = get<1>(a2[s1]);
            s = get<2>(a2[s1]);

            if (year < y)
                continue;
            else if (year > y)
            {
                mp[s1] = {j, s2};
                a1[s1] = {year, month, day};
                a2[s1] = {hour, minn, sec};
                continue;
            }
            else
            {
                if (month < mn)
                    continue;
                else if (month > mn)
                {
                    a1[s1] = {year, month, day};
                    a2[s1] = {hour, minn, sec};
                    mp[s1] = {j, s2};
                    continue;
                }
                else
                {
                    if (day < d)
                        continue;
                    else if (day > d)
                    {
                        a1[s1] = {year, month, day};
                        a2[s1] = {hour, minn, sec};
                        mp[s1] = {j, s2};
                        continue;
                    }
                    else
                    {
                        if (hour < h)
                            continue;
                        else if (hour > h)
                        {
                            a1[s1] = {year, month, day};
                            a2[s1] = {hour, minn, sec};
                            mp[s1] = {j, s2};
                            continue;
                        }
                        else
                        {
                            if (minn < m)
                                continue;
                            else if (minn > m)
                            {
                                a1[s1] = {year, month, day};
                                a2[s1] = {hour, minn, sec};
                                mp[s1] = {j, s2};
                                continue;
                            }
                            else
                            {
                                if (sec < s)
                                    continue;
                                else if (sec > s)
                                {
                                    a1[s1] = {year, month, day};
                                    a2[s1] = {hour, minn, sec};
                                    mp[s1] = {j, s2};
                                    continue;
                                }
                                else
                                {
                                    a1[s1] = {year, month, day};
                                    a2[s1] = {hour, minn, sec};
                                    mp[s1] = {j, s2};
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vector<string> v{"A+", "A-", "AB+", "AB-", "B+", "B-", "O+", "O-"};
    map<string, int> m2;
    for (int i = 0; i < v.size(); ++i)
    {
        m2[v[i]] = 0;
    }
    set<int> st;
    map<int, int> m1;
    for (auto i : mp)
    {
        st.insert(i.second.first);
        m1[i.second.first]++;
        m2[i.second.second]++;
    }
    for (auto i : m2)
    {
        cout << i.first << " " << i.second << endl;
    }
    for (auto i : st)
    {
        cout << i << " " << m1[i] << endl;
    }
}

