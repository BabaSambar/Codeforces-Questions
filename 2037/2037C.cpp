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

void rotate(vector<ll>& arr, ll n)
{
    rotate(arr.begin(),arr.begin()+n,arr.end());
}


bool isprime(ll n)
{
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

void solve()
{
    ll n; cin >> n;
    vector<ll> nums;
    vector<ll> evens;
    vector<ll> odds;
    for(ll i=1; i<=n; i++)
    {
        if(i % 2 ==0)
        {
            evens.push_back(i);
        }
        else
        {
            odds.push_back(i);
        }
    }
    sort(odds.begin(), odds.end(), greater<int>());
    for(ll i=0; i<evens.size(); i++)
    {
        nums.push_back(evens[i]);
    }

    bool found = false;
    for(ll i=0; i<odds.size(); i++)
    {
        if(isprime(nums.back() + odds[0]))
        {
            rotate(odds, 1);
        }
        else
        {
            found = true;
            break;
        }
    }
    if(!found)
    {
        cout << -1 << endl;
        return;
    }

    for(ll i=0; i<odds.size(); i++)
    {
        nums.push_back(odds[i]);
    }
    for(auto i: nums) cout << i << sp; nl;


}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}
