#include<iostream>
#include<vector>
using namespace std;

vector<int> uniq(int arr[], int n)
{
    vector<int> uniqueNums;
    for(int i=0 ; i<6 ; i++)
    {
        int counter=0;
        for(int j=0; j <6 ; j++)
        {
            if(arr[i] == arr[j])
            {
                counter++;
            }
        }
        if(counter == 1)
        {
            uniqueNums.push_back(arr[i]);
        }
    }
    return uniqueNums;
}

int main()
{
    int arr[6] = {1,2,3,2,1,5};
    vector<int> ans = uniq(arr , 6);
    cout<<"Unique nums are : ";
    for(int i=0 ; i<ans.size() ; i++)
    {
        cout<<ans[i] <<" ";
    }
    
}