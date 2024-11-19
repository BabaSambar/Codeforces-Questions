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

// DEBUG
void print(ll a[], ll n)
{
    for(int i=0; i<n; i++)
    {
        cout << a[i] << ", ";
    }
    cout <<"\n";
}

void ordered_sort(ll costs[], ll incomes[], ll differences[], ll classes)
{
    std::vector<ll> indices(classes);
    for(int i=0; i<classes; i++)
    {
        indices[i] = i;
    }

    std::sort(indices.begin(), indices.end(), [&costs](ll i1, ll i2)
    {
        return costs[i1] < costs[i2];
    });
    ll sorted_costs[classes];
    ll sorted_incomes[classes];
    ll sorted_differences[classes];

    for(ll i=0; i<classes; i++)
    {
        sorted_costs[i] = costs[indices[i]];
        sorted_incomes[i] = incomes[indices[i]];
        sorted_differences[i] = differences[indices[i]];
    }

    std::copy(sorted_costs, sorted_costs + classes, costs);
    std::copy(sorted_incomes, sorted_incomes + classes, incomes);
    std::copy(sorted_differences, sorted_differences + classes, differences);
}

void solve(ll classes, ll w)
{
    int xp=0;
    ll costs[classes], incomes[classes], weapons[w], differences[classes];
    for(int i=0; i<classes; i++)
    {
        cin >> costs[i];
    }
    for(int i=0; i<classes; i++)
    {
        cin >> incomes[i];
    }
    for(int i=0; i<w; i++)
    {
        cin >> weapons[i];
    }

    ordered_sort(costs, incomes, differences, classes);
    

}


int main(){
    fIO
    // freopen("inp.txt","r",stdin);
    // tc
    ll classes, weapons;
    cin >> classes >> weapons;
    solve(classes, weapons);
}