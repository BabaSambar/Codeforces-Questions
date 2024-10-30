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
    int p;
    cin >> p;
    int a[p];
    int b[p];
    for(int i=0; i<p; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<p; i++)
    {
        cin >> b[i];
    }
    // Loop through everything
    int asum=0, bsum=0;
    for(int i=0; i<p; i++)
    {
        if(a[i] > b[i]) asum += a[i];
        else if(a[i] < b[i]) bsum += b[i];
        // pass if a[i] == b[i]
    }
    for(int i=0; i<p; i++)
    {
        if(a[i] == b[i])
        {
            if(a[i] > 0)
            {
                if(asum > bsum)
                {
                    bsum += a[i];
                }
                else if(asum < bsum)
                {
                    asum += a[i];
                }
                else if(asum == bsum) asum+=a[i];
            }
            if(a[i] < 0)
            {
                if(asum > bsum)
                {
                    asum += a[i];
                }
                else if(asum < bsum)
                {
                    bsum += a[i];
                }
                else if(asum == bsum) asum+=a[i];
            }
        }
    }
    cout << min(asum, bsum) << "\n";
}


int main(){
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}