// WA

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

#define MOD 998244353

ll dp(ll Y) {
    vector<ll> dp(Y + 1, 0);
    dp[0] = 1;
    
    for (ll p = 2; p <= Y; p *= 2) {
        for (ll i = Y; i >= p; --i) {
            dp[i] = (dp[i] + dp[i - p]) % MOD;
        }
    }

    return dp[Y];
}

void solve()
{
    ll n; cin >> n;
    cout<< dp(n) << endl;

}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}