#include<iostream>
using namespace std;

/*
    KEY POINTS:
        -   The number which you want to shift into right side, put the number in a Temp Variable
            and use loop to assign n = n+1, means if this is array [1,2,3,4,5] arr[i] = arr[i+1] => 
            and inside the loop use if when its the last iteration assign the last elment the value of temp variable.
*/
int main()
{
    int arr[5] = {1,2,3,4,5};
    int temp = arr[0];

    for(int i=0 ; i<5 ; i++)
    {
        if(i == 5-1)
        {
            arr[i] = temp;
        }
        else
        {
            arr[i] = arr[i+1];
        }
    }
    for(int i=0 ; i<5 ; i++)
    {
        cout<<arr[i] << " ";
    }
}