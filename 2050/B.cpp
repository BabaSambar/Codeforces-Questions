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
    vector<ll> v(n);
    for(auto& x: v) cin >> x;
    ll s = 0;
    for(auto x: v)
    {
        s+=x;      
    }
    if(s % n != 0) 
    {
        cout << "NO" << endl;
        return;
    }

    ll target = s / n;

    ll evensum = 0;
    ll evens = 0;
    // evens
    for(ll i=0; i<n; i+=2)
    {
        evensum += v[i];
        evens++;
    }
    if(evensum / evens != target)
    {
        cout << "NO" << endl;
        return;
    }
    // ods
    evensum=0;
    evens = 0;
    for(ll i=1; i<n; i+=2)
    {
        evensum += v[i];
        evens++;
    }
    if(evensum / evens != target)
    {
        cout << "NO" << endl;
        return;
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
