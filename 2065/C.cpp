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
    ll n, m; cin >> n >> m;
    vector<ll> a(n), b(m);
    for(auto& x: a) cin >> x;
    for(auto& x: b) cin >> x;

    if(n == 1){
        cout << "YES" << endl;
        return;
    }

    // check for i=1
    if(a[0] > a[1]){
        ll diff = b[0] - a[0];
        if(diff > a[1]){
            cout << "NO" << endl;
            return;
        }
        a[0] = diff;
    }

    for(ll i=1; i<n-1; i++){
        ll diff = b[0] - a[i];
        if(a[i] > a[i+1]){
            if(diff < a[i-1] || diff > a[i+1]){
                cout << "NO" << endl;
                return;
            }
        }
        a[i] = diff;
    }
    cout << "YES" << endl;

}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}
