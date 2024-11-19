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

bool periodic(ll n)
{
	string bin = bitset<32>(n).to_string();
	bin.erase(0, bin.find_first_not_of('0'));

	// special cases for power of 2 - 1 for all 1111111...111
	if((n & (n + 1)) == 0) return true;

	// assume it repeats
	// check repeating number
	ll equalbits = 0;
	for(ll i=0; i<bin.size(); i++)
	{
		if(bin[i] == bin[0]) equalbits++;
		else break;
	}

	// loop and check if it passes
	string s = bin.substr(0, equalbits);
	bin += bin;

	cout << bin << endl;

	for(ll i=0; i<bin.size(); i+=2 * equalbits)
	{
		if(bin.substr(i, equalbits) != s) return false;
		if(bin.substr(i + equalbits, equalbits) != bitset<32>((~stoi(bin, nullptr, 2)) & ((1 << bin.length()) - 1)).to_string().substr(32 - bin.length())) return false;
	}
	return true;
}

void solve()
{
	ll l, r; cin >> l >> r;
	ll ans = 0;
	for(ll i=l; i<=r; i++)
	{
		if(periodic(i))
		{
			cout << i << endl;
			ans++;
		}
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