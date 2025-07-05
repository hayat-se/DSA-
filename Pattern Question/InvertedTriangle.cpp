#include<iostream>
using namespace std;

int main()
{
/*
    Pattern : n=4
            1 1 1 1
              2 2 2
                3 3 
                  4
*/
    int n=4;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<i ; j++)  // for printing Spaces
        {
            cout<<" ";
        }

        for(int k = 0 ; k < n-i ; k++)  // for printing elements
        {
            cout<<i+1 ;
        }
        cout<<"\n";
    }
    
}