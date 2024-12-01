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

// unsatisfying array


void solve()
{
    ll n, k; cin >> n >> k;
    vector<ll> nums(n);
    for(ll i=0; i<n; i++)
    {
        nums[i] = i+1;
    }   

    vector<vector<ll>> queries;
    for(ll i=0; i<k; i++)
    {
        ll l, r, m; cin >> l >> r >> m;
        vector<ll> temp = {l, r, m};
        queries.push_back(temp);
    }
    // // debug
    // for(auto query: queries)
    // {
    //     cout << "query: " << query[0] << " " << query[1] << " " << query[2] << endl;
    // }
    // cout << endl;

    for(auto query: queries)
    {
        ll minval = min(nums[query[0]-1], nums[query[1]-1]);
        if(minval == query[2])
        {
            while(find(nums.begin(), nums.end(), minval) != nums.end())
            {
                nums[find(nums.begin(), nums.end(), minval) - nums.begin()]++;
            }
        }
    }

    for(ll i=0; i<n; i++)
    {
        if(nums[i] > n)
        {
            cout << -1 << endl;
            return;
        }
    }
    for(ll i=0; i<n; i++)
    {
        cout << nums[i] << " ";
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


