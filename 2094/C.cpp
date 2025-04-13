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
    ll n; cin >> n;
    vector<vector<ll>> G(n, vector<ll>(n, 0));
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            cin >> G[i][j];
        }
    }
    vector<ll> permutation(2*n, 0);

    // Go right
    for(ll i=0; i<n; i++){
        permutation[i+1] = G[0][i];
    }
    // Go down
    for(ll i=0; i<n; i++){
        permutation[i+n] = G[i][n-1];
    }
    // Find MEX
    ll mex = 1;
    set<ll> s(permutation.begin(), permutation.end());
    for(ll i=1; i<=2*n; i++){
        if(s.find(i) == s.end()) mex = i;
    }
    permutation[0] = mex;

    for(ll i=0; i<2*n; i++){
        cout << permutation[i] << " ";
    }
    cout << endl;
}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}
