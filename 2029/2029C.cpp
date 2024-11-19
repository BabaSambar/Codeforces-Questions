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
    for(ll i=0; i<n; i++)
    {
        cin >> nums[i]; 
    }
    ll score = 0;
    vector<int> scores(n);
    for(ll i=0; i<n; i++)
    {
        if(nums[i] > score)
        {
            scores[i] = 1;
            score++;
        }
        else if(nums[i] < score)
        {
            scores[i] = -1;
            score--;
        }
        else
        {
            scores[i] = 0;
        }
    }
    // find largest substring of 0
    ll l=0, r=0;
    ll m = 0;
    ll curr = -1;
    for(ll i=0; i<n; i++)
    {
        if(scores[i] != 1)
        {
            if(curr == -1)
            {
                curr = i;
            }
            if(i - curr + 1 > m)
            {
                m = i - curr + 1;
                l = curr;
                r = i;
            }
        }
        else
        {
            curr = -1;
        }
    }
    // remove l <= i <= r indices
    nums.erase(nums.begin() + l, nums.begin() + r);
    nums.erase(nums.begin() + l);

    for(ll i=0; i<nums.size(); i++)
    {
        cout << nums[i] << ", ";
    }
    cout << endl;

    score = 0;
    for(ll i=0; i<nums.size(); i++)
    {
        if(nums[i] > score)
        {
            score++;
        }
        else if(nums[i] < score)
        {
            score--;
        }
    }

    cout << score << endl;
}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}
