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

vector<pair<ll, ll>> get_factors(ll x)
{
    vector<pair<ll, ll>> ret;
    for(ll i=1; i*i<=x; i++)
    {
        if(x%i == 0)
        {
            ret.pb(mp(i, x/i));
            if(i != x/i)
                ret.pb(mp(x/i, i));
        }
    }
    return ret;
}

void solve()
{
    ll n; cin >> n;
    vector<ll> nums(n);
    for(ll i=0; i<n; i++) cin >> nums[i];
    n-=2;
    vector<pair<ll, ll>> factors = get_factors(n);
    // for(auto i:factors) cout << "(" << i.first << ", " << i.second << ")" << sp;nl;
    pair<ll, ll> finalfactors;
    for(auto factor: factors)
    {
        if(find(nums.begin(), nums.end(), factor.first) != nums.end() && find(nums.begin(), nums.end(), factor.second) != nums.end())
        {
            nums.erase(find(nums.begin(), nums.end(), factor.first));
            nums.erase(find(nums.begin(), nums.end(), factor.second));
            finalfactors = factor;
            break;
        }
    }
    cout << finalfactors.first << sp << finalfactors.second << endl;
}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}
