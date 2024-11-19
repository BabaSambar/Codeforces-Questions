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
    int n; cin >> n;
    int zeroes = 0, ones = 0;
    for(int i=0; i<n*2; i++)
    {
        int temp;
        cin >> temp;
        if(temp == 0)
        {
            zeroes++;
        }
        else if(temp == 1)
        {
            ones++;
        }
    }

    int min = ones % 2 == 0 ? 0 : 1;

    int i = 0;
    while(zeroes > 0 && ones > 0)
    {
        i++;
        zeroes--;
        ones--;
    }
    int max = i;
    cout << min << " " << max << endl; 
}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}