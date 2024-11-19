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
    string s; cin >> s;
    for(int i=0; i<s.length()-1; i++)
    {
        if(s[i] == '1' && s[i+1] == '0')
        {
            string after = s;
            for(int j=i+2; j<s.length()-1; j++)
            {
                string temp(1, (s[j]));
                s.append(temp);
            }
            cout << "->" << s << endl;
            if(stoi(s) >= 2)
            {
                cout << "YES\n";
                return; 
            }
        }
    }
    cout << "NO\n";
}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}