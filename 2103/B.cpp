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
    string s; cin >> s;
    ll moves = s[0] == '1' ? 1 : 0;
    for(ll i=1; i<n; i++) if(s[i] != s[i-1]) moves++;

    ll change01 = s[0] == '1' ? 1 : 0;
    ll change10 = 0;
    for(ll i=1; i<n; i++){
        if(s[i-1] == '0' && s[i] == '1') change01++;
        if(s[i-1] == '1' && s[i] == '0') change10++;
    }
    ll score = 0;
    if(change01 >=2 || change10 > 2) score = 2;
    else if(s[0] == '1' && s[n-1] == '0') score = 1;
    else {
        for(ll i=1; i<n; i++){
            if((s[i-1] == '0' && s[i] == '1' && s[n-1] == '0') || (s[i-1] == '1' && s[i] == '0' && s[n-1] == '1')) {
                score = 1;
                break;
            }
        }
    }
    cout << n + (moves - score) << endl;
}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}
