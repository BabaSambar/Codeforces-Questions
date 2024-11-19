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

void solve()
{
    ll n, k; cin >> n >> k;
    unordered_map<ll, ll> mp;

    for(ll i=0; i<n; i++)
    {
        ll x; cin >> x;
        if(mp.find(x) != mp.end())
        {
            mp[x] += 1;
        }        
        else 
        {
            mp[x] = 0;
        }
    }

    // sort mp in descending order
    vector<pair<ll, ll>> v(mp.begin(), mp.end());
    sort(v.begin(), v.end(), [](pair<ll, ll> a, pair<ll, ll> b) {
        return a.second > b.second;
    });
    for(auto i: v) mp[i.first] = i.second;

    // reduce k elements from mp.second
    ll k2 = k;
    for(auto &i: mp)
    {
        if(k >= i.second)
        {
            k -= i.second;
            i.second = 0;
        }
        else
        {
            i.second -= k;
            break;
        }
    }

    // calculate diversity
    ll tans = n * (n-1) / 2;
    for(auto i: mp)
    {
        cout << i.first << sp << i.second << sp << tans << sp;
        tans -= ( i.second * (i.second + 1) )/ 2;
        cout << tans << endl;
    }
    cout << tans << endl;
}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}