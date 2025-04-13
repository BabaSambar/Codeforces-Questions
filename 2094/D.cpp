
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
#define CYR cout<<"YES\\n";return
#define CNR cout<<"NO\\n";return 
#define cyr cout<<"Yes\\n";return
#define cnr cout<<"No\\n";return
#define sc second
#define fs first
#define c(a) cout<<a<<endl
#define all(a) a.begin(),a.end()
#define pi 3.14159265359
#define nl cout<<"\\n"
#define sp " "
#define fIO ios::sync_with_stdio(false); cin.tie(0);

void solve()
{
    string s, r; cin >> s >> r;

    // Compress s
    vector<pair<char, ll>> compressedS;
    ll i = 0, count = 0;
    char currentChar = s[i];
    while(i < s.size()){
        if(s[i] == currentChar) count++;
        else {
            compressedS.push_back({currentChar, count});
            currentChar = s[i];
            count = 1;
        }
        i++;
    }
    compressedS.push_back({currentChar, count});
    // Compress r
    vector<pair<char, ll>> compressedR;
    i = 0; 
    count = 0;
    currentChar = r[i];
    while(i < r.size()){
        if(r[i] == currentChar) count++;
        else {
            compressedR.push_back({currentChar, count});
            currentChar = r[i];
            count = 1;
        }
        i++;
    }
    compressedR.push_back({currentChar, count});

    // Check bounds. valid if n <= freq <= 2n
    if(compressedS.size() != compressedR.size()){
        cout << "NO\n";
        return; 
    }
    for(ll i=0; i<compressedS.size(); i++){
        if(compressedS[i].first == compressedR[i].first && (compressedR[i].second <= 2*compressedS[i].second && compressedR[i].second >= compressedS[i].second)){
            continue;
        }
        else{
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}

