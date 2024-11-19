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
#define tc ll t; cin>>t; while(t--)
#define CYR cout<<"YES\n"; return
#define CNR cout<<"NO\n"; return 
#define cyr cout<<"Yes\n"; return
#define cnr cout<<"No\n"; return
#define sc second
#define fs first
#define c(a) cout<<a<<endl
#define all(a) a.begin(), a.end()
#define pi 3.14159265359
#define nl cout<<"\n"
#define sp " "

const long long MOD = 998244353;

ll e(ll b, ll e) {
    ll result = 1;
    for(; e; b=b*b%MOD, e/=2)
    {
        if(e & 1) result = result * b % MOD;
    }
    return result;
}

void solve() {
    ll smod = 0;
    ll n;
    cin >> n;
    for (ll k = 1; k <= n; ++k) {
        string s = bitset<32>(k).to_string();
        s = s.substr(s.find('1'));  // Removing leading zeros
        smod = stoll(to_string(smod) + s) % MOD; // Concatenating the binary representation
    }
    cout << smod << endl;
}

int main() {
    tc
        solve();

    return 0;
}
