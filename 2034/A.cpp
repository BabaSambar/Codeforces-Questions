#include<bits/stdc++.h>
#include <numeric>

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

ll lcm(ll a, ll b)
{
    ll maxnum = a > b ? a : b;
    ll flag=1;
    while(flag)
    {
        if(maxnum % a == 0 && maxnum % b == 0)
        {
            return maxnum;
        }
        ++maxnum;
    }
    return 0;
}

void solve()
{
    ll a, b;
    cin >> a >> b;
    cout << lcm(a, b) << endl;
}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}
