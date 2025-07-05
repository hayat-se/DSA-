#include<iostream>
using namespace std;

void insertionSort(int arr[] , int n)
{
    for(int i=1; i<n ; i++)
    {
        int current = arr[i];
        int previous = i-1;

        while(previous >= 0 && arr[previous] > current)
        {
            arr[previous+1] = arr[previous];
            previous--;
        }

        arr[previous+1] = current;
    }
}

int main()
{

    int arr[5] = {3,2,1,4,7};
    insertionSort(arr, 5);

    for(int i=0 ; i<5 ; i++)
    {
        cout<<arr[i] <<" "; 
    }
}