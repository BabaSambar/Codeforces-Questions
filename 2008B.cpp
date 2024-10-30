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
    string s; cin >> s;
    s = " " + s;
    if(((int)sqrt(n))*((int)sqrt(n)) != n)
    {
        cout << "NO" << endl;
        return;
    }
    // check beautiful
    int c = (int)sqrt(n);
    cout << "~~~~" << c << endl;
    // ones
    for(int i=1; i<=c; i++)
    {
        if(s[(1-1) * c + i] != '1') 
        {
            cout << "NO" << endl;
            return;
        }
    }
    for(int i=1; i<=c; i++)
    {
        if(s[(i-1) * c + 4] != '1')
        {
            cout << "NO" << endl;
            return;
        } 
    }
    for(int i=c; i>=1; i--)
    {
        if(s[(4-1) * c + i] != '1')
        {
            cout << "NO" << endl;
            return;
        }
    }
    for(int i=1; i<=c; i++)
    {
        if(s[(i-1) * c + 1] != '1')
        {
            cout << "NO" << endl;
            return;
        }
    }

    if(c <= 2)
    {
        cout << "YES" << endl;
        return;
    }

    // zeros
    for(int i=2; i<=n-1; i++)
    {
        for(int j=2; j<=n-1; j++)
        {
            if(s[(i-1) * c + j] != '0')
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;

}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}