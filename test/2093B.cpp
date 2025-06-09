#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    string s; cin >> s;
    if(s.size() == 1){
        cout << 0 << endl;
        return;
    }
    bool start_counting = false;
    ll num_zeroes = 0;
    for(ll i = s.size() - 1; i >= 0; i--){
        if(s[i] == '0') {
            if(start_counting) num_zeroes++;
        }
        else start_counting = true;
    }
    cout << s.size() - num_zeroes - 1 << endl;
}

int main(){
    ll t; cin >> t;
    while(t--) solve();
}