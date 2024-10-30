#include <iostream>
#include <vector>
#include <string>
#include <math.h>

int calculateArea(std::vector<std::vector<int>> coordinates)
{
    int distance = 0;

    int x1 = coordinates[0][0];
    int y1 = coordinates[0][1];
    std::cout << x1 << ", " << y1 << std::endl;

    for(int i=1; i<coordinates.size(); i++)
    {
        if(coordinates[i][0] != x1 && coordinates[i][1] != y1)
        {
            distance = x1 - coordinates[i][0];
            std::cout << distance << std::endl;
            break;
        }
    }

    return distance*distance;
}

int main()
{


    std::vector<std::vector<int>> coordinates1 = {
        {1, 2},
        {4, 5},
        {1, 5},
        {4, 2}
    };
    std::vector<std::vector<int>> coordinates2 = {
        {45, 11},
        {45, 39},
        {17, 11},
        {17, 39}
    };
    std::cout << calculateArea(coordinates1) << std::endl;
    std::cout << calculateArea(coordinates2) << std::endl;
    return 0;
}