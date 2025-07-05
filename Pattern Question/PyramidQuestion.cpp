#include<iostream>
using namespace std;


int main()
{

/*
    Patter : n =4

       1
      121
     12321
    1234321
*/

    int n=4;
    for(int i=0 ; i<n ; i++)    // To print rows
    {
        for(int j=0 ; j < n-i-1 ; j++)  // for starting spaces in the pattern
        {
            cout<<" ";
        }

        for(int j=0 ; j<i+1 ; j++) // for printing the triangle
        {
            cout<<j+1;
        }

        for(int k=i ; k>0 ; k--) // for printing the inverted trianle
        {
            cout<<k;
        }

        cout<<"\n";
    }
}