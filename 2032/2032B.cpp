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

vector<int> findFactor(int n)
{
    vector<int> factors;
    for(int i=1; i <= n; i++)
    {
        if(n % i == 0)
        {
            factors.push_back(i);
        }
    }
    return factors;
}


void solve()
{
    int n, k; cin >> n >> k;
    vector<int> factors = findFactor(n);

    if(n == 1)
    {
        if(k == 1)
        {
            cout << 1 << endl << 1 << endl;
        }
        else 
        {
            cout << -1;
        }
        return;
    }

    if(n / 2 + 1 != k)
    {
        cout << -1 << endl;
        return;
    }

    int r = factors[1];
    int c = n / r;

    cout << r << endl;

    int a = 1;
    for(int i=0; i<r; i++)
    {
        cout << a << " ";
        a += c; 
    }
    cout << endl;
}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}