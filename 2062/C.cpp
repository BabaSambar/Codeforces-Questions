// WA
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

ll getVal(vector<ll> nums, ll ans=0){
    for(ll i=1; i<nums.size(); i++) ans += nums[i] - nums[i-1];
    return ans;
}
void solve()
{
    ll n; cin >> n;
    vector<ll> nums(n);
    for(auto& x: nums) cin >> x;

    ll ans = accumulate(nums.begin(), nums.end(), 0);
    while(nums.size()>1){
        ll nonReverseVal = getVal(nums);
        reverse(nums.begin(), nums.end());
        ll reverseVal = getVal(nums);
        if(nonReverseVal > reverseVal) reverse(nums.begin(), nums.end());

        vector<ll> duplicateNums = nums;
        for(ll i=1; i<nums.size(); i++) nums[i] = duplicateNums[i] - duplicateNums[i-1];
        nums.erase(nums.begin());
        ans = max((ll)accumulate(nums.begin(), nums.end(), 0), ans);
    }
    cout << ans << endl;
}

int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}
