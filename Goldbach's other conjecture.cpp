/*
Project Euler 46
*/

#include <iostream>
#include <vector>
#include <cmath>
#include <string>

bool isPrime(int n)
{
    if(n<=1)return false;
    for(int i=2; i<=n/2; i++)
    {
        if(n%i == 0) return false;
    }
    return true;
}

int testCase(int n)
{
    int n_test = n-2;
    int n_square = 1;
    int answer = 0;

    while(n_square*n_square < n)
    {
        while(n_test > 1)
        {
            if(isPrime(n_test))
            {
                if(n_test + (2*n_square*n_square) == n)
                {
                    answer++;
                    std::cout << n_test << " + 2 * " << n_square << "^2" << std::endl;
                }
            }
            n_test -= 2;
        }
        n_square++;
        n_test = n-2;

        // std::cout <<  " ~ " << answer << std::endl;
    }
    return answer;
}

int main()
{
    std::vector <int> n;

    std::string input = " ";
    while(input != "")
    {
        std::string temp;
        std::getline(std::cin, temp);
        if(temp != "") n.push_back(std::stoi(temp, 0, 10));
        input = temp;
    }

    for(int i=0; i<n.size(); i++)
    {
        int temp = n[i];
        std::cout << testCase(temp) << std::endl;
    }
    return 0;
}