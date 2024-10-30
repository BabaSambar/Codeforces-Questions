import os

# C++ template for the Codeforces problems
cpp_template = """#include<bits/stdc++.h>

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
    
}


int main()
{
    fIO
    // freopen("inp.txt","r",stdin);
    tc
        solve();
}
"""

def create_cpp_files(round_number, replace=True):
    # Create problem files for problems A to E
    letters = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H']
    rounds = 5
    for i in range(rounds):
        file_name = f"{round_number}{letters[i]}.cpp"
        
        # If file already exists, skip it
        if os.path.exists(file_name) and replace is False:
            print(f"File {file_name} already exists. Skipping.")
            continue

        # Write the template to the file
        with open(file_name, 'w') as f:
            f.write(cpp_template)
        
        print(f"Created {file_name}")

if __name__ == "__main__":
    # Input the Codeforces round number
    round_number = input("Enter the Codeforces round number: ")
    
    # Create C++ files for problems A to E
    create_cpp_files(round_number)
