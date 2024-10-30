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
    // A, B, C, d
    vector<int> choices(4, 0);
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == 'A')
        {
            choices[0]++;
        }
        else if(s[i] == 'B')
        {
            choices[1]++;
        }
        else if(s[i] == 'C')
        {
            choices[2]++;
        }
        else if(s[i] == 'D')
        {
            choices[3]++;
        }
        else
        {
        }
    }

    int score = 0;
    for(int i=0; i<choices.size(); i++)
    {
        if(choices[i] > n) score += n;
        else score += choices[i];
    }

    cout << score << endl;

 
}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}