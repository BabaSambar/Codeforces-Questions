#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool solve()
{
    cout << "aeaea\n";
    // Get input
    vector<int> rect;
    for(int i=0; i<2; i++)
    {
        cin >> rect[i];
    }

    for(int i=0; i<rect.size(); i++)
    {
        cout << rect[i];
    }

    return false;

}


int main()
{  
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    int cases = 1;
    cin >> cases;

    for(int i=0; i<cases; i++)
    {
        bool solvable = solve();
        if(solvable) cout << "yep\n";
    }

    return 0;
}