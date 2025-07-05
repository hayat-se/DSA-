#include<iostream>
using namespace std;

/*
    -   Shift all zero to the right side and arrange the array.
*/


// int main()
// {
//     int arr[5] = {1,0,4,0,5};
//     int counter = 0;
//     for(int i=0 ; i<5 ; i++)
//     {
//         if(arr[i] == 0)
//         {
//             if(arr[i] == 0 && arr[i+1] == 0)
//             {
//                 int temp = arr[i+1];
//                 arr[i+1] = arr[i+2];
//                 arr[i+2] = temp;

//             }
//             int temp = arr[i];
//             arr[i] = arr[i+1];
//             arr[i+1] = temp;
//         }
//     }

//     for(int k=0 ; k<5 ; k++)
//     {
//         cout<<arr[k] <<" ";
//     }
// }



int main()
{
    int arr[6] = {0,0,4,1,0,5};
    int counter = 0;

    for(int i=0 ; i <6 ; i++)
    {
        if(arr[i] != 0)
        {
            arr[counter] = arr[i];
            counter++;
        }
    } 
    for(int k = counter ; k < 6 ; k++)
    {
        arr[k] =0;
    }

    for(int x = 0 ; x<6 ; x++)
    {
        cout<<arr[x] <<" ";
    }
}