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
    vector<vector<ll>> scores(3, vector<ll>(3, 0));
    for(ll i=0; i<3; i++)
    {
        for(ll j=0; j<3; j++)
        {
            cin >> scores[i][j];
        }
    }   

    // scores
    vector<ll> finalScores(3, 0);
    // compare s1, s2
    // check if s1 > s2
    if((scores[0][0] > scores[1][0] || scores[0][1] > scores[1][1] || scores[0][2] > scores[1][2]) && !(scores[0][0] <= scores[1][0] && scores[0][1] <= scores[1][1] && scores[0][2] <= scores[1][2]))
    {
        finalScores[0]++;
    }

    // check if s2 > s1

    // compare s2, s3
    // check if s2 > s3

    // check if s3 > s2

    // compare s1, s3
    // check if s1 > s3

    // check if s3 > s1


    sort(finalScores.begin(), finalScores.end());
    for(ll i=0; i<2; i++)
    {
        if(finalScores[i] == finalScores[i+1])
        {
            cout << "no" << endl;
            return;
        }
    }
    cout << "yes" << endl;
}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}