#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcases = 0;
    cin >> testcases;

    for(int i=0; i<testcases; i++)
    {
        // IP
        int n;
        cin >> n;
        vector<int> numbers(n, 0);
        for(int j=0; j<n; j++)
        {
            cin >> numbers[j];
        }

        // OP
        if(numbers[0] == numbers[n-1])
        {
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
            cout << numbers[n-1] << " ";
            for(int j=0; j<n-1; j++)
            {
                cout << numbers[j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}