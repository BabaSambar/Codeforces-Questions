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
    vector<ll> nums(4);
    for(auto& x: nums) cin >> x;

    nums.insert(nums.begin() + 2, 0);
    nums[2] = nums[1] + nums[0];
    ll ans = 0;
    for(ll i=0; i<3; i++){
        if(nums[i+2] == nums[i+1] + nums[i]){
            ans++;
        }
    }
    nums[2] = nums[4] - nums[3];
    ll tempans = 0;
    for(ll i=0; i<3; i++){
        if(nums[i+2] == nums[i+1] + nums[i]){
            tempans++;
        }
    }
    ans = max(tempans, ans);
    cout << ans << endl;
}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}
