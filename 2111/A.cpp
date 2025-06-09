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
    ll nums[] = {n, n, n/2};
    bool zeroes = false;
    ll operations = 1, changingIndex = 0, rightDirection = -1;
    while(!zeroes){
        nums[changingIndex] /= 2;
        if(changingIndex == 0 || changingIndex == 2) nums[changingIndex] /= 2;
        if(changingIndex <= 0 || changingIndex >= 2) rightDirection *= -1;
        if(rightDirection == 1) changingIndex++;
        else changingIndex--;
        operations++;
        for(auto x: nums){
            if(x != 0){
                zeroes = false;
                break;
            }
            else zeroes = true;
        }
    }
    cout << operations << endl;
}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}
