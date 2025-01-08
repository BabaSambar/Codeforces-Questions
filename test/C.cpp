
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
    string s; cin >> s;
    cout << "1 " << s.size() << " ";
    string sComp = "";
    for(ll i=0; i<s.size(); i++)
        sComp += (s[i] == '0' ? '1' : '0');
    ll ptr = s.find('0') != string::npos ? s.find('0') : -1;
    if(ptr == -1)
    {
        cout << s.size() << " " << s.size() << endl;
        return;
    }

    ll index = ptr + 1;
    string ss = sComp.substr(ptr, 1);
    while(s.find(sComp.substr(ptr, index-ptr)) != string::npos && index <= s.size())
    {
        ss = sComp.substr(ptr, index-ptr);
        index++;
    }
    index = s.find(ss);
    cout << index+1 << " " << index + (s.size() - ptr) << endl;
}

int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}

