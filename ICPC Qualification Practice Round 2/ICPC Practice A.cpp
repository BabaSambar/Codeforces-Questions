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
    string n; cin >> n;
    vector<pair<ll, ll>> placeValues(n.size());
    for(ll i=0; i<n.size(); i++)
    {
        placeValues[n.size()-i-1] = {n[n.size()-i-1]-'0', pow(10, i)};
    }

    vector<ll> values(placeValues.size());
    ll index = 0;
    for(ll i=0; i<placeValues.size(); i++)
    {
        bool t = true;
        for(ll j = 0; j < placeValues.size(); j++)
        {
            if(j == i) 
            {
                t = false;
                continue;
            }
            if(t) values[i] += placeValues[j].first * placeValues[j].second / 10;
            else values[i] += placeValues[j].first * placeValues[j].second;
        }
    }
    cout << *min_element(values.begin(), values.end()) << endl; 
}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}