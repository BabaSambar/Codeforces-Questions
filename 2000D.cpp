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

void check(vector<char> letters, vector<int> nums, int l, int r, int* value)
{
    int add = 0;
    for(int i=l; i<r+1; i++)
    {
        add += nums[i];
    }
    cout << "L:" << l << ", " << "R:" << r << endl;
    cout << "__->" << add << endl;
    *value += add;


    while(l < r)
    {
        
        if(letters[l] != 'L') l++;
        else r--;
        if(letters[l] == 'L' && letters[r] == 'R') break;
      
    }

    if(l < r) check(letters, nums, l+1, r, value);

}

void solve()
{
    int n; cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++)
    {
        cin >> nums[i];
    }
    string s;
    cin >> s;
    vector<char> letters(n);
    for(int i=0; i<n; i++)
    {
        letters[i] = s[i];
    }
    

    int val = 0;
    check(letters, nums, 0, n-1, &val);
    cout << val << endl;



}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}