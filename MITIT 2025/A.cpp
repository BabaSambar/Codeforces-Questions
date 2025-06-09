#include<bits/stdc++.h>

using namespace std;
 
#define ll long long
#define fIO ios::sync_with_stdio(false); cin.tie(0);

void solve()
{
    ll n; cin >> n;
    string ans = "";
    if(n % 2 == 0){
        ans = "2025";
        for(ll i=0; i<n-4; i++){
            ans += '0';
        }
    } else{
        ans = "42025";
        for(ll i=0; i<n-5; i++){
            ans += '0';
        }
    }
    cout << ans << endl;
}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    ll t; cin >> t;
    while(t--){
        solve();
    }
}
