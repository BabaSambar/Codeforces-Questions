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
    int n; cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++)
    {
        cin >> nums[i];
    }

    set<int> s;
    s.insert(nums[0]);

    for(int i=1; i<n-1; i++)
    {
        if(s.find(nums[i]-1) == s.end() && s.find(nums[i]+1) == s.end())
        {
            cout << "NO\n";
            return;
        }
        if(s.find(nums[i]) == s.end())
        {
            s.insert(nums[i]);
        }
    }
    cout << "YES\n";
    return;
}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}