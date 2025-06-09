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
    ll n, m, l, r; cin >> n >> m >> l >> r;
    pair<ll, ll> p = {0, 0};
    while(m > 0){
        // Both sides can be increased
        if(p.first > l && p.second < r){
            if(p.first > p.second) p.second++;
            else p.first--;
            m--;
        }
        // Only left side can be increased
        else if(p.first > l && p.second >= r){
            p.first--;
            m--;
        }
        // Only right side can be increased
        else if(p.first <= l && p.second < r){
            p.second++;
            m--;
        }
    }
    cout << p.first << " " << p.second << endl;
}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}
