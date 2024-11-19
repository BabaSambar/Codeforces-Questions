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
    int n,m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> grid[i][j];
        }
    }
    pair<int, int> top = {INT_MAX, INT_MAX}, bottom = {INT_MIN, INT_MIN};
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(grid[i][j] == '#')
            {
                top = min(top, {i, j});
                bottom = max(bottom, {i, j});
            }
        }
    }
    cout  << (top.first + bottom.first) / 2 + 1 << " " << bottom.second + 1 << "\n";
}


int main(){
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}