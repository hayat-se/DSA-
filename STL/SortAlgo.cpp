#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main()
{
    //      Array
    // int arr[5] = {1,5,8,3,5};
    // sort(arr , arr+5);  // used for simple array
    // for(int i=0 ; i<5 ; i++)
    // {
    //     cout<<arr[i] <<" ";
    // }

    //      Vector
    // vector<int> vec = {5,3,1,4};
    // sort(vec.begin() , vec.end());

    // for(int val : vec)
    // {
    //     cout<<val <<" ";
    // }

    //      Vector of pairs

    vector<pair<int, int>> vec;
    vec.emplace_back(1,2);
    vec.emplace_back(5,1);
    vec.emplace_back(3,6);
    vec.emplace_back(9,5);

    sort(vec.begin() , vec.end());

    for(pair<int, int> val : vec)
    {
        cout<<val.first <<" "<<val.second <<"\n";
    }

    
}