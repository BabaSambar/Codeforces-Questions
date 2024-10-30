#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int calculateMaximumIndex(vector<int> arr)
{
    int answer = arr[0];
    int temp = 0;
    for(int i=0; i<arr.size(); i++)
    {
        if(answer < arr[i])
        {
            answer = arr[i];
            temp = i;
        }
    }
    return temp;
}

vector<int> * calculate(vector<int> &arr, int dps)
{
	vector<int> indexArr = {};

    while(indexArr.size() != arr.size())
    {
        int max = calculateMaximumIndex(arr);
        if(arr[max] > 0 && arr[max]-dps <= 0)
        {
            indexArr.push_back(max);
        }
        arr[max] -= dps;
    }

	for(int i=0; i<indexArr.size(); i++)
	{
		indexArr[i]++;
	}

    arr = indexArr;
    return &arr;
}

void splitstr(string str, string deli = " ", vector<int> &arr)
{
    int start = 0;
    int end = str.find(deli);
    while (end != -1) {
		int i = stoi(str.substr(start, end-start), 0, 10);
		arr.push_back(i);
        start = end + deli.size();
        end = str.find(deli, start);
    }
	int i = stoi(str.substr(start, end-start), 0, 10);
	arr.push_back(i);
}

int main()
{
	string input;
	getline(cin, input);
	


    vector<int> arr;
	string input;
	getline(cin, input);
	splitstr(input, " ", arr);





    vector<int> *answer = calculate(arr, dps);
    for(int i=0; i<answer->size(); i++)
    {
        cout << answer->at(i) << " ";
    }

    return 0;
}