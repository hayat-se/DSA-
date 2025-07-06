#include<iostream>
#include<vector>
using namespace std;

pair<int , int> pairSum(vector<int> nums,  int target)
{
    pair<int, int> foundPairs;
    for(int i=0 ; i<nums.size() ; i++)
    {
        for(int j= i+1 ; j<nums.size() ; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                foundPairs.first = i;
                foundPairs.second = j;
            }
        }
    }

    return foundPairs;
}

int main()
{
    int target = 4;
    vector<int> numbers = {1, 3 ,5, 9, 4};
    pair<int, int> found = pairSum(numbers , target);

    cout<<"Pair of Indexes : ("<<found.first <<"," <<found.second <<")";
}