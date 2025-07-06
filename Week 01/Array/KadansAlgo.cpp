#include<iostream>
using namespace std;


int main()
{
    int arr[5] = {1,2,-5,7,-3};
    int sum = 0;
    int maxSum = arr[0];

    for(int i=0 ; i<5 ; i++)
    {
        sum += arr[i];

        maxSum = max(sum , maxSum);

        if(sum < 0)
        {
            sum = 0;
        }
    }

    cout<<"Max Sub Array Sum : "<<maxSum <<"\n";
}