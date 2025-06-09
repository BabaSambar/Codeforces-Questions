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
    vector<ll> nums(n);
    for(auto &x: nums) cin >> x;

    ll t = nums[0] <= k ? 1 : -1;
    vector<ll> p(n+1, 0), s(n+2, 0);
    for(ll i=1; i<=n; i++){
        p[i] = p[i-1] + t;
        t = nums[i] <= k ? 1 : 0;
    } 
    t = nums[n-1] <= k ? 1 : 0;
    for(ll i=n; i>=1; i--){
        s[i] = s[i+1] + t;
        t = nums[i] <= k ? 1 : 0;
    }
    vector<bool> prefixes(n+1, false), suffixes(n+2, false);
    for(ll i=1; i<=n; i++){
        prefixes[i] = p[i] >= (i % 2 == 0 ? 1 : 0);
    }
    for(ll i=1; i<=n; i++){
        suffixes[i] = s[i] >= ((n - i + 1) % 2 == 0 ? 1 : 0);
    }
    for(ll i=0; i < n-2; i++){
        if(prefixes[i] && suffixes[i+2]){
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
