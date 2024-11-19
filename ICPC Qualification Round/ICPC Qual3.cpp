// RE

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
// cost
void solve()
{
    ll n; cin >> n;
    vector<ll> points(n);
    vector<ll> costs(n);
    for (ll &x : points) cin >> x;
    for (ll &x : costs) cin >> x;

    vector<ll> results;
    for (ll i = 0; i < points.size(); ++i) {
        for (ll j = i + 1; j < points.size(); ++j) {
            ll result = min(costs[i], costs[j]) * abs(points[i] - points[j]);
            results.push_back(result);
        }
    }

    ll prices = 0;
    sort(all(results));
    for(ll i=0; i<n-1; i++)
    {
        prices += results[i];
    }
    cout << prices << endl;
}




int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();

    return 0;
}