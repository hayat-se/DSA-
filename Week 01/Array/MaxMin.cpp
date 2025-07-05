#include<iostream>
using namespace std;


int main()
{
    int nums[10] = {1,2,3,4,-1,6,7,8,9,10};

    int max = 0;
    for(int i=0 ; i<10 ; i++)
    {
        if(max < nums[i])
        {
            max = nums[i];
        }
    }

    int min = 0;
    for(int i=0 ; i<10 ; i++)
    {
        if(min > nums[i])
        {
            min = nums[i];
        }
    }
    cout<<"Max Number : "<<max<<endl;
    cout<<"Min Number : "<<min<<endl;
}