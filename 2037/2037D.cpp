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
    ll n, m, l; cin >> n >> m >> l;
    vector<pair<ll, ll>> hurdles(n);
    for(ll i=0; i<n; i++) // non overlap and has gap
    {
        cin >> hurdles[i].fs;
        cin >> hurdles[i].sc;
    }
    vector<pair<ll, ll>> powerups(m);
    for(ll i=0; i<m; i++) 
    {
        cin >> powerups[i].fs;
        cin >> powerups[i].sc;
    }

    ll ans = 0;
    ll powerupsused = 0;
    for(auto hurdle: hurdles)
    {
        vector<pair<ll, ll>> temppowerups;
        for(auto powerup: powerups)
        {
            if(powerup.fs > hurdle.fs)
            {
                break;
            }
            else
            {
                temppowerups.push_back(powerup);
            }
        }
        sort(temppowerups.begin(), temppowerups.end(), [](pair<ll, ll> a, pair<ll, ll> b) {
            return a.sc > b.sc;
        });
        for(auto powerup: temppowerups)
        {
            if(ans > (hurdle.sc-hurdle.fs))
            {
                break;
            }
            powerupsused++;
            ans+=powerup.sc;
        }
        if(ans <= (hurdle.sc-hurdle.fs))
        {
            cout << -1 << endl;
            return;
        }
    }
    cout << powerupsused << endl;
}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}
