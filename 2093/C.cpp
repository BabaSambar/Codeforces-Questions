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

bool isPrime(ll n){
    if(n<=1) return false;
    if(n<=3) return true;
    if(n%2 == 0 || n%3 == 0) return false;

    for(ll i=5; i<sqrt(n); i+=6){
        if(n%i == 0 || n%(i+2) == 0) return false;
    }
    return true;
}

void solve()
{
    ll n, k;
    cin >> n >> k;

    if(k > 1 && n > 1){
        cout << "NO\n";
        return;
    }
    if(k > 1){
        string s = "";
        for(ll i=0; i<k; i++){
            s += '1';
        }
        ll num = stoll(s);
        if(isPrime(num)) cout << "YES\n";
        else cout << "NO\n";
    } else if (n > 1){
        if(isPrime(n)) cout << "YES\n";
        else cout << "NO\n";
    } else {
        cout << "NO\n";
    }
}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}
