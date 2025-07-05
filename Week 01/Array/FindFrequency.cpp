#include<iostream>
using namespace std;


int main()
{
    int nums[10] = {1,2,3,2,1,6,6,8,9,9};

    for(int i=0 ; i<10 ; i++)
    {
        int count = 0;
        for(int j=0 ; j<10 ; j++)
        {
            if(nums[i] == nums[j])
            {
                count++;
            }
        }
        cout<<nums[i] <<" Frequency : "<<count <<endl;
    }
}