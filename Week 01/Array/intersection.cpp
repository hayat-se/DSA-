#include<iostream>
#include<vector>
using namespace std;

vector<int> intersection(int arr1[] , int n1 , int arr2[] , int n2)
{
    vector<int> commonElements;
    for(int i=0 ; i<n1 ; i++)
    {
        int counter=0;
        for(int j=0 ; j<n2 ; j++)
        {
            if(arr1[i] == arr2[j])
            {
                commonElements.push_back(arr1[i]);
            }
        }
        // if(counter > 1)
        // {
        //     commonElements.push_back(arr1[i]);
        // }
    }

    return commonElements;
}

int main()
{
    int arr1[4] = {1,2,3,4};
    int arr2[3] = {6,5,8};

    vector<int> ans = intersection(arr1 , 4 , arr2 ,3);
    if(ans.empty())
    {
        cout<<"No Common elements found ";
    }else
    {
        cout<<"Common elements are : ";
        for(int i=0 ; i<ans.size() ; i++)
        {
            cout<<ans[i] <<" ";
        }    
    }
    
}