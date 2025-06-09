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

void solve(){
    
}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    vector<ll> powers;
    ll num = 5;
    for(ll i=0; i<16; i++){
        powers.push_back(num);
        num *= 5;
    }
    
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll score = 1;
        for(ll i=0; i<powers.size(); i++){
            if(n > powers[i]) {
                score++;
            }
        }
        if(score==1){
            cout << "MIT time\n";
        }else{
            cout << "MIT^" << score << " time\n";
        }
    }   
}
