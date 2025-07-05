#include<iostream>
using namespace std;

void selectionSort(int arr[] , int n)
{
    for(int i=0 ; i<n-1 ; i++)
    {
        for(int j = i+1 ; j<n ; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int n=5;
    int arr[n] = {5,2,6,7,1};
    
    selectionSort(arr, 5);

    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i] <<" ";
    }
}