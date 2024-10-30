#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float ceil(float n)
{
    if(round(n) < n) n = round(n) + 1;
    return n;
}

int solve(int k, int n, int s, int p)
{
    int n_planes = k * n;
    int n_sheets_per_person = ((int)(n/s)) + 1;
    int n_sheets_total = n_sheets_per_person * k;
    int n_packs = (int)(n_sheets_total / p);
    return n_packs;
}

int * split(int *input_string_arry, string input)
{
    int arr[4];
    int counter = 0;
    while(counter <= input.size())
    {
        
    }
}

int main()
{
    string input;
    cin >> input;
    int k, n, s, p;
    int input_string_array[4];
    split(input_string_array, input);
    return 0;
}