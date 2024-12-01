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

// bool check(bitset<32> bs, ll k)
// {
//     bitset<32> temp(k);
//     for(ll i=0; i<32; i++)
//     {
//         if(temp[i] == 1 && bs[i] == 0)
//         {
//             cout << bs.to_string() << endl;
//             cout << temp.to_string() << endl;
//             return false;
//         } 
            
//     }
//     return true;
// }

void solve()
{
    int N, K;
    cin >> N >> K;
    vector<int> array(N);
    for (int i = 0; i < N; ++i) 
    {
        cin >> array[i];
    }

    bool found = false;

    for (int i = 1; i < (1 << N); ++i) 
    { 
        int subset_and = -1;
        vector<int> indices;

        for (int j = 0; j < N; ++j) 
        {
            if (i & (1 << j)) 
            {
                if (subset_and == -1) 
                {
                    subset_and = array[j];
                } else 
                {
                    subset_and &= array[j];
                }
                indices.push_back(j + 1); //  + 1 for index+1
            }
        }

        if (subset_and == K)
        {
            found = true;
            cout << "YES\n";
            cout << indices.size() << "\n";
            for (int index : indices)
            {
                cout << index << " ";
            }
            cout << "\n";
            break;
        }
    }

    if (!found) 
    {
        cout << "NO\n";
    }
}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}
