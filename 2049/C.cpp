
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
#define CYR cout<<"YES\\n";return
#define CNR cout<<"NO\\n";return 
#define cyr cout<<"Yes\\n";return
#define cnr cout<<"No\\n";return
#define sc second
#define fs first
#define c(a) cout<<a<<endl
#define all(a) a.begin(),a.end()
#define pi 3.14159265359
#define nl cout<<"\\n"
#define sp " "
#define fIO ios::sync_with_stdio(false); cin.tie(0);

ll mex(vector<ll>& nums)
{
	vector<bool> temp(nums.size()+1, 0);
	for(int i=0; i<nums.size(); i++)
		if(nums[i] < nums.size())
			temp[nums[i]] = true;	
	ll mex = 0;
	while(temp[mex])
		mex++;
	return mex;
}

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;

    vector<ll> friends;
    for(ll i=1; i<=n; i++)
    {
        friends.push_back((i+n)%(n+1));
        friends.push_back((i+1)%n);
        if(i == x) friends.push_back(y);
        else if(i == y) friends.push_back(x);

        cout << mex(friends) << " ";
        friends.clear();
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

