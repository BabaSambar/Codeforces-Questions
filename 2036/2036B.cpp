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
    int n, k; cin >> n >> k;
    map<int, int> brand_costs;
    for(int i=0; i<k ;i++)
    {
        int b, c;
        cin >> b >> c;
        if(brand_costs.find(b) != brand_costs.end())
        {
            brand_costs[b] += c;
        }
        else{
            brand_costs[b] = c;
        }
    }
    vector<int> costs;
    int i=0;
    for(auto i: brand_costs)
    {
        costs.push_back(i.second);
    }
    sort(costs.begin(), costs.end(), greater<>());
    int ans = accumulate(costs.begin(), costs.begin() + min((int)brand_costs.size(), n), 0); 
    cout << ans << endl;
}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}