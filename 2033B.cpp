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

vector<int> getDiagonals(vector<vector<int>> matrix)
{
    vector<int> nums;

    for(int i=0; i<matrix.size(); i++)
    {
        nums.push_back(matrix[i][i]);
    }
    return nums;
}

void solve()
{
    int n; cin >> n;
    vector<vector<int>> nums(n, vector<int>(n, 0));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> nums[i][j];
        }
    }

    int t = n;
    for(int i=n; i>0; i--)
    {
        for(int j=0; j<t; j++)
        {
            // [j][j]
            t--;
        }
    }

}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}