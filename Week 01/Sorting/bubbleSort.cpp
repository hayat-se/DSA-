#include<iostream>
using namespace std;

void bubbleSort(int arr[] , int n)
{
    for(int j=0 ; j<n ; j++) // 5 times for every number
    {
        bool isSwaped = false;  // used if already sorted array is passed
        for(int i=0 ; i<5 ; i++) // here it will compare each number
        {
            if(arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                isSwaped = true;
            }
        }
        if(!isSwaped) // means array is already sorted
        {
            return;
        };
    }
}

int main()
{
    int arr[5] = {2,5,1,8,3};
    
    bubbleSort(arr , 5);

    for(int i=0 ; i<5 ; i++)
    {
        cout<<arr[i] <<" ";
    }
}