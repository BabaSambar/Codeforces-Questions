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
    string s; cin >> s;
    map<char, ll> charmap;
    for(ll i=0; i<n; i++)
    {
        charmap[s[i]]++;
    }

    if(s.size() == 1)
    {
        cout << s << endl;
        return;
    }

    char maxchar;
    char minchar;
    ll min_occurrence = LLONG_MAX, max_occurrence = LLONG_MIN;
    for (const auto& pair : charmap) 
    {
        if(pair.second > max_occurrence)
        {
            maxchar = pair.first;
            max_occurrence = pair.second;
        }
        if(pair.second < min_occurrence)
        {
            minchar = pair.first;
            min_occurrence = pair.second;
        }
    }
    
    if(maxchar != minchar)
    {
        auto it = s.begin();
        while(*it != minchar && it != s.end())
            it++;
        s[it-s.begin()] = maxchar;
    }
    else
    {
        for(ll i=0; i<n; i++)
        {
            if(s[i] != minchar)
            {
                s[i] = maxchar;
                break;
            }
        }
    }
    cout << s << endl;
}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}
