#include<iostream>
using namespace std;



int main()
{
    int n=5;
    int arr[5] = {1,2,-5,7,-3};

    int maxSum = 0;
    for(int start = 0; start < n ; start++)
    {
        int currentSum=0;
        for(int end =start ; end < n ; end++)
        {
            currentSum+= arr[end];
            maxSum = max(currentSum , maxSum);
        }
    }

    cout<<"Max : "<<maxSum <<"\n";

}