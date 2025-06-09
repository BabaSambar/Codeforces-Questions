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
    ll n; cin >> n;
    vector<ll> nums(n);
    for(auto &x: nums) cin >> x;
    map<ll, ll> freq;
    for(ll i=0; i<n; i++) freq[nums[i]]++;
    bool naive_approach = true;
    for(auto x: freq){
        if(x.second >= 2){
            naive_approach = false;
            break;
        }
    }

    if(naive_approach){
        ll ans = 0;
        sort(nums.begin(), nums.end());

        vector<ll> pairsums = {};
        for(ll i=1; i<n; i+=2) pairsums.push_back(nums[i]-nums[i-1]);
        sort(pairsums.begin(), pairsums.end());
        ll even_ans = pairsums[0] + pairsums[1];
        pairsums = {};
        for(ll i=2; i<n; i+=2) pairsums.push_back(nums[i]-nums[i-1]);
        sort(pairsums.begin(), pairsums.end());
        ll odd_ans = pairsums[0] + pairsums[1];

        ans = min(even_ans, odd_ans);
        cout << ans << endl;
        return;
    }else{
        map<ll, ll> filtered_freq;  // Check if 2 pairs already exist
        for(auto x: freq){
            if(x.second >= 2){
                filtered_freq.insert(x);
            }
        }
        if(filtered_freq.size() >= 2){
            cout << '0' << endl;  // Ouput smallest key pair (2)
            return;
        }
        assert(filtered_freq.size() == 1);
        for(auto x: freq){  // consider 1 remaining pair as taken
            if(x.second >= 2){
                nums.erase(find(nums.begin(), nums.end(), x.first));
                nums.erase(find(nums.begin(), nums.end(), x.first));
                break;
            }
        }
        sort(nums.begin(), nums.end());  // Now create a pair naively and output answer
        ll ans = 0;
        if(nums[0] != nums[1]) ans += nums[1] - nums[0];
        cout << ans << endl;
    }
}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}
