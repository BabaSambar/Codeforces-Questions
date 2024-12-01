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


// tle

void solve()
{
    ll n; cin >> n;
    vector<ll> nums(n);
    for(auto& x: nums) cin >> x;

    vector<ll> countingnums(n);
    map<ll, ll> mp = {{0, 0}, {1, 0}, {2, 0}};
    for(ll i=0; i<n; i++)
        mp[nums[i]] += 1;
    ll ind = 0;
    for(auto x: mp)
        while(x.second--)
            countingnums[ind++] = x.first;

    vector<pair<ll, ll>> swappairs;
    ll pointer = n-1;
    if(find(nums.begin(), nums.end(), 2) != nums.end()) 
    {
        while(countingnums[pointer] == 2 && pointer >= 0)
        {
            if(nums[pointer] == 2)
            {
                pointer--;
                continue;
            }
            else if(nums[pointer] == 1)
            {
                ll twoindex = 0;
                while(nums[twoindex] != 2) twoindex++;
                if(nums[twoindex] != nums[pointer]) swappairs.pb({pointer, twoindex});
                swap(nums[pointer], nums[twoindex]);
                pointer--;
                continue;
            }
            ll twopointer = 0;
            while(nums[twopointer] != 2 && twopointer < n) twopointer++;
            if(nums[pointer] == 0)
            {
                // double swaps
                ll oneindex = 0;
                while(nums[oneindex] != 1) oneindex++;
                if(nums[oneindex] != nums[pointer]) swappairs.pb({oneindex, pointer});
                swap(nums[oneindex], nums[pointer]);
                if(nums[twopointer] != nums[pointer]) swappairs.pb({pointer, twopointer});
                swap(nums[pointer], nums[twopointer]);
                pointer--;
            }
        }
    }

    ll high = n-1;
    if(find(nums.begin(), nums.end(), 2) == nums.end()) high = n-1;
    else 
        while(nums[high] == 2)
            high--;
    
    ll low = 0;
    while(low < high)
    {
        if(nums[low] == 0)
            low++;
        else
        {
            if(nums[low] != nums[high]) swappairs.pb({low, high});
            swap(nums[low], nums[high]);
            high--;
        }
    }
    cout << swappairs.size() << endl;
    for(auto x: swappairs) cout << x.fs+1 << " " << x.sc+1 << endl;
}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}
