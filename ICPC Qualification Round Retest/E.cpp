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

// small indices

ll generate_combinations(const vector<ll>& a, const vector<ll>& b, vector<ll>& current, int index, ll m) {

    ll t= 0;
    for(ll i=2; i<a.size(); i++)
    {
        if(current[i] < current[i-1] + current[i-2]) 
        {
            t++;
        }
    }
    m = max(t, m);

    // Base case: if we have filled all positions
    if (index == a.size()) {
        // find num of maxes
        return m;
    }

    // Choice 1: Take the element from vector `a`
    current[index] = a[index];
    return generate_combinations(a, b, current, index + 1, m);

    // Choice 2: Take the element from vector `b`
    current[index] = b[index];
    return generate_combinations(a, b, current, index + 1, m);
}


void solve()
{
    ll n; cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    for(ll &x:a) cin >> x;
    for(ll &x:b) cin >> x;

    // Vector to store the current combination and all results
    vector<ll> current(n);

    ll m = 0;
    // Generate all combinations
    ll ans = generate_combinations(a, b, current, 0, m);

    cout << ans << endl;

}



int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}
