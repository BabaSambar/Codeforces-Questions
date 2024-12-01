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
    letters = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
    rounds = 4
    for i in range(rounds):

        # Create folder to store file
        if not os.path.exists(f"{round_number}"):
            os.mkdir(f"{round_number}")
            print(f"Created folder {round_number}")

        file_name = f"{letters[i]}.cpp"
        
        # If file already exists, skip it
        if os.path.exists(f"{round_number}/{file_name}") and replace is False:
            print(f"File {file_name} already exists. Skipping.")
            continue

        # Write the template to the file
        with open(f"{round_number}/{file_name}", 'w') as f:
            f.write(cpp_template)
        
        print(f"Created {file_name}")

if __name__ == "__main__":
    # Input the Codeforces round number
    round_number = input("Enter the Codeforces round number: ")
    replace = bool(input("Type 1 to replace current files, 0 to skip replacing: "))
    
    create_cpp_files(round_number, replace)
