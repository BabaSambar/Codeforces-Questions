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
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    
    // quickly sort array
    int median = 0;
    int temp;
    if(arr[0] > arr[1])
    {
        temp = arr[0];
        arr[0] = arr[1];
        arr[1] = temp;
    }
    if(arr[0] > arr[2])
    {
        temp = arr[0];
        arr[0] = arr[2];
        arr[2] = arr[0];
    }
    if(arr[1] > arr[2])
    {
        temp = arr[1];
        arr[1] = arr[2];
        arr[2] = temp;
    }
    median = arr[1];

    int f = abs(arr[0]-median) + abs(arr[1]-median) + abs(arr[2]-median);
    cout << f << "\n";
}


int main(){
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}