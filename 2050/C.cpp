#include<bits/stdc++.h>

using namespace std;
 
#define ll long long
#define pb push_back
#define pf push_front
#define mp make_pair
#define ff(s, f) for(ll i=s; i<=f; i++)
#define fr(s, f) for(ll i=s; i>=f; i--)
#define ffi(s,f) for(ll i=s; i<=f; i++)
#define ffj(s, f) for(ll j=s; j<=f; j++)
#define tc ll t;cin>>t;while(t--)
#define CYR cout<<"YES\n";return
#define CNR cout<<"NO\n";return 
#define cyr cout<<"Yes\n";return
#define cnr cout<<"No\n";return
#define sc second
#define fs first
#define c(a) cout<<a<<endl
#define all(a) a.begin(),a.end()
#define pi 3.14159265359
#define nl cout<<"\n"
#define sp " "
#define fIO ios::sync_with_stdio(false); cin.tie(0);

// tle


bool canadd(int n, int x_max, int y_max) {
    for (int y = 0; y <= y_max; ++y) 
    {
        int remaining = n - 6 * y;
        if (remaining < 0) break;
        if (remaining % 2 == 0) 
        { 
            int x = remaining / 2;
            if (x <= x_max) 
            {
                return true;
            }
        }
    }
    return false; // 0 default fasle
}

void solve()
{
    string s;
    cin >> s;

    map<ll, ll> mp;
    for(ll i=0; i<s.size(); i++)
    {
        mp[s[i] - '0']++;
    }

    ll sum = 0;
    for(ll i=0; i<s.size(); i++)
    {
        sum += s[i]-'0';
    }

    ll val = (9 - (sum+9) % 9)%9;
    ll maxincrease = mp[2] * 2 + mp[3] * 6;

    // cout << maxincrease << ", " << val << endl;
    for(ll i=val; i<=maxincrease; i+=9)
    {   
        // cout << i << ", " << mp[2] << ", " << mp[3] << endl;
        if(canadd(i, mp[2], mp[3]))
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}
