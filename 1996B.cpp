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
    int n, k;
    cin >> n >> k;
    vector<vector<int>> grid(n, vector<int>(n));
    vector<vector<int>> newgrid(n/k, vector<int>(n/k, 0));
    for(int i=0; i<n; i++)
    {
        string temp; cin >>temp;
        for(int j=0; j<n; j++)
        {
            if(temp[j] == '0')
            {
                grid[i][j] = 0;
            }
            else if(temp[j] == '1')
            {
                grid[i][j] = 1;
            }
            else return;
        }
    }

    // // print
    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<n; j++)
    //     {
    //         cout << grid[i][j] << ", ";
    //     }
    //     cout << endl;
    // }

    for(int i=0; i<n; i+=k)
    {
        for(int j=0; j<n; j+=k)
        {
            if(grid[i][j] == 0)
            {
                newgrid[i/k][j/k] = 0;
            }
            else
            {
                newgrid[i/k][j/k] = 1;
            }
        }
    }

    for(int i=0; i<n/k; i++)
    {
        for(int j=0; j<n/k; j++)
        {
            // cout << "->i:" << i << ", j:" << j << ", ";
            cout << newgrid[i][j];   
        }
        cout << endl;
    }

}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}