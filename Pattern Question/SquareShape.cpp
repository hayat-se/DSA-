#include<iostream>
using namespace std;
/*
   Shape: for n =4

    Pattern 1:
            1 2 3 4
            1 2 3 4
            1 2 3 4
            1 2 3 4

    Pattern 2:
            * * * *
            * * * *
            * * * * 
            * * * *
    Pattern 3:
            A B C D
            A B C D
            A B C D
            A B C D

    Pattern 4: for n=3
            1 2 3
            4 5 6
            7 8 9
    
    Pattern 5: for n=3
            A B C
            D E F
            G H I
*/

int main()
{
    int n=3;
    //              " Pattern 1 Code"
    // for(int i=1 ; i<= n ; i++)
    // {
    //     for(int j=1 ; j<=n ; j++)
    //     {
    //         cout<<j <<" ";
    //     }
    //     cout<<"\n";
    // }

    //              " Pattern 2 Code"
    // for(int i=1 ; i<= n ; i++)
    // {
    //     for(int j=1 ; j<=n ; j++)
    //     {
    //         cout<<"*" <<" ";
    //     }
    //     cout<<"\n";
    // }

    //              " Pattern 3 Code"
    // for(int i=0 ; i< n ; i++)
    // {
    //     char ch = 'A';
    //     for(int j=0 ; j< n ; j++)
    //     {
    //         cout<<ch <<" ";
    //         ch++;
    //     }
    //     cout<<"\n";
    // }

    //              " Pattern 4 Code"
    // int num =1;
    // for(int i=0 ; i< n ; i++)
    // {
    //     for(int j=0 ; j< n ; j++)
    //     {
    //         cout<<num <<" ";
    //         num++;
    //     }
    //     cout<<"\n";
    // }

    //              " Pattern 5 Code"
    char ch ='A';
    for(int i=0 ; i< n ; i++)
    {
        for(int j=0 ; j< n ; j++)
        {
            cout<<ch <<" ";
            ch++;
        }
        cout<<"\n";
    }
}



