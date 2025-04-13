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

    map<ll, ll> zeroes;
    map<ll, ll> ones;

    // Calcualte zeroes and ones
    for(auto num: nums){
        bitset<64> n(num);
        // Add ith bit to zeroes and ones
        for(ll i=0; i<64; i++){
            if(n.test(i)) ones[i]++;
            else zeroes[i]++;
        }
    }

    ll max_score = 0;
    // Calculate score for all numbers
    for(auto num: nums){
        bitset<64> n(num);
        ll score = 0;
        for(ll i=0; i<64; i++){
            if(n.test(i)) score += zeroes[i]*(1LL << i);
            else score += ones[i]*(1LL << i); 
        }
        max_score = max(max_score, score);
    }
    cout << max_score << endl;
}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}
