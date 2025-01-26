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
    ll n;
    cin >> n;
    vector<ll> nums(n);
    for(auto& x: nums) cin >> x;

    vector<ll> ans;
    set<ll> s;
    for(ll i=0; i<n; i++)
    {
        if(s.find(nums[i]) == s.end())
        {
            ans.push_back(nums[i]);
            s.insert(nums[i]);
        }
    }
    set<ll> d;
    for(ll i=0; i<n; i++)
        d.insert(i+1);
    for(auto it: s)
        d.erase(it);
    for(auto x: d)
        ans.push_back(x);
    for(auto x: ans)
        cout << x << " ";
    cout << endl;
}



int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}
