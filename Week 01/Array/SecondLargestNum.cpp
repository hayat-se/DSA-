#include<iostream>
using namespace std;


int main()
{
    int nums[10] = {1,4,6,3,5,12,72,8,9,10};
    
    int max = 0 ; 
    int secondMax = 0;
    for(int i=0 ; i<10 ; i++)
    {
        if(nums[i] > max)
        {
            secondMax = max;
            max = nums[i];
        }
        else
        {
            if(nums[i] > secondMax && nums[i] != max)
            {
                secondMax = nums[i];
            }
        }
    }

    cout<<"Greatest Number : "<<max <<endl;
    cout<<"2nd Greatest Number : "<<secondMax <<endl;
}