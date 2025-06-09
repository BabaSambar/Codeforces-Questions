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

const ll MAXNUM = 1e6+1;
bitset<MAXNUM+1> primes;
vector<ll> primesVec;

void solve()
{
    ll l, r; cin >> l >> r;
    ll count = 0;
    if(l == 1){
        count++;
        l = 2;
    }
    count += upper_bound(primesVec.begin(), primesVec.end(), r) - lower_bound(primesVec.begin(), primesVec.end(), l);
    cout << count << "\n";
}

int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    for(ll i=0; i<=MAXNUM; i++) primes[i] = true;
    primes[0] = false;
    primes[1] = false;
    for(ll i=2; i*i <= MAXNUM; i++) if(primes[i]) for(ll j=i*i; j<=MAXNUM; j+=i) primes[j] = false;
    for(ll i=2; i<MAXNUM; i++) if(primes[i]) primesVec.push_back(i);
    tc
        solve();
}
