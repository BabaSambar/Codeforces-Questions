#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    vector<int> inputs;
    vector<int> outputs;
    for(int i=0; i<testcases; i++)
    {
        int temp;
        cin >> temp;
        inputs.push_back(temp);
    }
    for(int i:inputs)
    {
        if(i%2==0)
        {
            outputs.push_back((i/2)-1);
        }
        else
        {
            outputs.push_back((i-1)/2);
        }
    }
    // Print outputs
    for(int i:outputs)
    {
        cout << i << "\n";
    }
    return 0;
}