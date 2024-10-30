/*
Codeforces Round 891 Div 3
*/
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

string process(int number, int digits)
{
    string str_number = to_string(number);
    int counter = -1;

    while(digits > 0)
    {
        char *kthDigit = &str_number[counter];
        char *k1thDigit = &str_number[counter+1];
        if(kthDigit >= to_string(5).c_str())
        {
            k1thDigit = to_string(k1thDigit)
        }
    }


}

int main()
{
    string a = "hellow";
    cout << a.length() << endl;
    return 0;

}
