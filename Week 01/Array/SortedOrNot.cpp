#include<iostream>
using namespace std;

/* 
- KEY POINTS:
        -    when you are comparing the elements of array to check if sorted or not 
            don't check the last element because it will be compared with null value and it will 
            be greater than that so if array is sorted or not it will say IT IS NOT SORTED so check
            n-1 elements.
        -   Use counter when there is any pair where i > i+1 element then increment counter and exit the loop. 
*/

int main()
{
    int sz;
    cout<<"Enter size of an Array : ";
    cin>>sz;
    int nums[sz];
    int counter = 0; // for finding if sorted or not
    
    for(int i=0 ; i<sz ; i++)
    {
        cout<<"Enter element "<<i+1 << " of Array : ";
        cin>>nums[i];
    }

    char op;
    cout<<"Do you want to check if array is sorted or not ? (Y/N) : ";
    cin>>op;

    if(op == 'Y' || op == 'y')
    {
        for(int i=0 ; i<sz-1 ; i++)
        {
            if(nums[i] > nums[i+1] )
            {
                counter++;
                break;
            }
        }
        if(counter == 0 )
        {
            cout<<"Array is sorted \n";
        }
        else if(counter > 0)
        {
            cout<<"Array is not sorted\n";
        }
    } 
    else 
    {
        cout<<"Exiting....\n";
        cout<<"Thank You \n";
    }
}