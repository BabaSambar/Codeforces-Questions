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



void ordered_sort(vector<int> a, vector<int> b, vector<int> diff)
{
    std::vector<int> indices(a.size());
    for(int i=0; i<a.size(); i++)
    {
        indices[i] = i;
    }

    std::sort(indices.begin(), indices.end(), [&a](ll i1, ll i2)
    {
        return a[i1] < a[i2];
    });

    vector<int> sorted_a(a.size());
    vector<int> sorted_b(a.size());
    vector<int> sorted_diff(a.size());

    for(ll i=0; i<a.size(); i++)
    {
        sorted_a[i] = a[indices[i]];
        sorted_b[i] = b[indices[i]];
        sorted_diff[i] = diff[indices[i]];
    }

    a = sorted_a;
    b = sorted_b;
    diff = sorted_diff;
    // std::copy(sorted_a, sorted_costs + classes, costs);
    // std::copy(sorted_incomes, sorted_incomes + classes, incomes);
    // std::copy(sorted_differences, sorted_differences + classes, differences);
}


int sum(vector<int> a)
{
    int sum=0;
    for(int i=0; i<a.size(); i++)
    {
        sum += a[i];
    }
    return sum;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    vector<int> b(n);
    vector<int> diff(n, 0);
    for(int i=0; i<n; i++)
    {
        diff[i] = a[i] - b[i];
    }

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin >> b[i];
    }


    ll score = 0;
    // for(int i=0; i<k; i++)
    // {
    //     score += *max_element(a.begin(), a.end());
    //     int index = std::find(a.begin(), a.end(), *max_element(a.begin(), a.end()))-a.begin();
    //     a[index] = a[index] - b[index];
    // }
    // cout << score << endl;

    int a_sum = sum(a);
    int diff_sum = sum(diff);
    for(int i=0; i<k/a.size(); i++)
    {
        score += a_sum;
        for(int j=0; j<a.size(); j++)
        {
            a[i] = max(a[i] - b[i], 0);
        }   
        a_sum -= diff_sum;
    }
    for(int i=0; i<k%a.size(); i++)
    {
        score += *max_element(a.begin(), a.end());
        int index = std::find(a.begin(), a.end(), *max_element(a.begin(), a.end()))-a.begin();
        a[index] = a[index] - b[index];
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