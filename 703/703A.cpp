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

int solve(){
    int m, c;
    cin >> m >> c;

    if(m>c) return 1;
    else if(m<c) return 0;
    else return -1;
}


int main(){
    fIO
    int m_score=0, c_score=0;
    // freopen("inp.txt","r",stdin);
    tc
        if(solve()==1)
        {
            m_score++;
        }else if(solve()==0){
            c_score++;
        }else{
            
        }
    if(m_score>c_score)
    {
        cout << "Mishka\n";
    }
    else if(m_score<c_score){
        cout << "Chris\n";
    }
    else{
        cout << "Friendship is magic!^^\n";
    }
}