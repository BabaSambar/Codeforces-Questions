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

// problem when m=1

ll overwrite(vector<ll> v, ll l, ll r, ll m, ll k, ll ans)
{
    // end recursion
    if(m == 1 && r-l == m) return ans+1;
    if(r-l < m) return ans;

    // process
    ll mid = (l+r-1)/2;
    ll start = mid - (k/2 - 1);
    ll end = start + k;
    fill(v.begin() + start, v.begin() + end,  1);

    return overwrite(v, l, start, m, k, ans+1);
    return overwrite(v, end, r, m, k, ans+1);
}


void solve()
{
    ll n, m, k; cin >> n >> m >> k;
    vector<ll> v(n);
    string s; cin >> s;
    for(ll i=0; i<n; i++)
    {
        v[i] = s[i] - '0';
    }
    ll l = 0, r = 0;

    // for(auto x: v) cout << x << " "; cout << endl;

    ll ans = 0;
    while(r < n)
    {
        if(v[l] == 1)
        {
            l++; r=l;
            continue;
        }
        // l, r is 0
        while(v[r]!= 1 && r < n)
        {
            r++;
            continue;
        }
        if(r > n) continue;
        // process
        ans += overwrite(v, l, r, m, k, 0);
        l = r;
        // cout << ans << endl;
    }
    cout << ans << endl;
}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}
