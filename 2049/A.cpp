
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

ll mex(vector<ll>& nums, ll l, ll r)
{
	vector<bool> temp(nums.size()+1-l-(nums.size()-r), 0);
	for(int i=l; i<=r; i++)
		if(nums[i] < nums.size())
			temp[nums[i]] = true;	
	ll mex = 0;
	while(temp[mex])
		mex++;
	return mex;
}

void solve()
{
	ll n; cin >> n;
	bool allZeroes = true;
	vector<ll> nums(n);
	for(ll i=0; i<n; i++)
	{
		ll temp; cin >> temp;
		if(temp != 0) allZeroes = false;
		nums[i] = temp;
	}
	
	if(allZeroes)
	{
		cout << 0 << endl;
		return;
	}
	
	ll l = 0, r = nums.size()-1;
	for(ll i=0; i<n; i++)
	{
		if(nums[i] != 0)
			break;
		l++;
	}
	for(ll i=r; i>=0; i--)
	{
		if(nums[i] != 0)
			break;
		r--;
	}

	if(mex(nums, l, r) == 0)
		cout << 1 << endl;
	else
		cout << 2 << endl;	
}

int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}

