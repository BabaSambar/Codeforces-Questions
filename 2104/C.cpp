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
    string s; cin >> s;
    ll aCards;
    for(ll i=0; i<n; i++) if(s[i] == 'A') aCards++;

    if(n==2) cout << "Bob\n";
    if(aCards == n || aCards == n-1) cout << "Alice\n";
    else if(s[n-1] == 'A' && (s[0] == 'A' || s[n-2] == 'A')) cout << "Alice\n";
    else cout << "Bob\n";
}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}
