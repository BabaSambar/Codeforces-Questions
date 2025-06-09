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

const ll MAXNUM = 1e7 + 1;
bitset<MAXNUM> unstable, corrupted;

vector<ll> safeNums;

void solve()
{
    ll n; cin >> n;
    if(corrupted[n]) {
        cout << -1 << '\n';
        return;
    }
    cout << *upper_bound(safeNums.begin(), safeNums.end(), n) << '\n';
}

int main()
{
    fIO
    unstable[0] = false;
    for(ll i=0; i<MAXNUM; i++) unstable[i] = unstable[i/10] || ( i % 10 == 7);
    for(ll i=1; i<MAXNUM; i++){
        if(!unstable[i]) continue;
        for(ll j=i; j < MAXNUM; j+=i) corrupted[j] = true;
    }
    for(ll i=0; i<MAXNUM; i++) if(!corrupted[i]) safeNums.push_back(i);
    tc
        solve();
}
