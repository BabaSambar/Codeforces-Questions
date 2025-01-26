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

void solve()
{
    
    ll n, k; cin >> n >> k;
    vector<vector<ll>> nums(n, vector<ll>(k, 0));

    for(ll i=0; i<n; i++){
        for(ll j=0; j<k; j++){
            cin >> nums[i][j];
        }
    }
    for(auto& x: nums){
        sort(x.begin(), x.end());
    }
    vector<ll> perm;
    for(auto x: nums){
        perm.push_back(x[0]);
    }
    vector<pair<ll, ll>> v;
    for(ll i=0; i< n; i++){
        v.push_back({perm[i], i});
    }
    sort(v.begin(), v.end());
    vector<ll> sorted_perm;
    for(auto p: v){
        sorted_perm.push_back(p.second);
    }
    if(k == 1){
        for(auto x: sorted_perm) cout << x+1 << " "; cout << endl;
        return;
    }
    for(ll i=0; i<k ; i++){
        for(ll j=0; j<n-1; j++){
            if(nums[j][i] >= nums[j+1][i]){
                cout << -1 << endl;
                return;
            }
        }
    }
    for(auto x: sorted_perm) cout << x+1 << " "; cout << endl;
}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}
