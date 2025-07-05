#include<iostream>
using namespace std;

/*
        Shape:
            *     *
            **   **
            *** ***
            ******* 
            *** ***
            **   **
            *     *


*/

int main()
{
    int n=4;

    // TOP portion
    for(int i=0 ; i<n; i++)
    {
        // *
        for(int j=0 ; j<i+1 ; j++)
        {
            cout<<"*";
        }

        // Spaces
        for(int j=0; j<(2*(n-i-1)-1); j++)
        {
            cout<<" ";
        }
        if(i == n-1)
        {
            for(int j=0 ; j<i ; j++)
            {
                cout<<"*";
            }
        }
        else
        {
            for(int j=0 ; j<i+1 ; j++)
            {
                cout<<"*";
            }
        }
        
        cout<<"\n";
    }

    // Bottom Portion
    for(int i=0 ; i<n-1 ; i++)
    {
        for(int j=i ; j<n-1 ; j++)
        {
            cout<<"*";
        }

        for(int j=0 ; j < 2*i+1; j++)
        {
            cout<<" ";
        }

        for(int j=n ; j>i+1 ; j--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}