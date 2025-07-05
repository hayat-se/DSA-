#include<iostream>
using namespace std;

int main()
{
    int n=4;

/*
    Pattern :
            *
            * *
            * * *
            * * * *
*/

    // for(int i=0 ; i<n ; i++)
    // {
    //     for(int j=0; j<i+1 ; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<"\n";
    // }

    /*
        Pattern:
                1 
                2 2 
                3 3 3 
                4 4 4 4
    
    */

    // for(int i=0 ; i<n ; i++)
    // {
    //     for(int j=0; j<i+1 ; j++)
    //     {
    //         cout<<i+1 <<" ";
    //     }
    //     cout<<"\n";
    // }

    /*
        Pattern :
                A
                B B
                C C C
                D D D D
    */

    // char ch = 'A';
    // for(int i=0 ; i<n ; i++)
    // {
    //     for(int j=0; j<i+1 ; j++)
    //     {
    //         cout<<ch <<" ";
    //     }
    //     ch++;
    //     cout<<"\n";
    // }
    

    /*
        Pattern :
                1
                1 2
                1 2 3
                1 2 3 4
    */
    
    // for(int i=0 ; i<n ; i++)
    // {
    //     for(int j=0; j<i+1 ; j++)
    //     {
    //         cout<<j+1 <<" ";
    //     }
    //     cout<<"\n";
    // }


     /*
        Pattern :
                1
                2 1
                3 2 1
                4 3 2 1
    */

    // for(int i=0 ; i<n ; i++)
    // {
    //     for(int j = i+1; j>0 ; j--)
    //     {
    //         cout<<j <<" ";
    //     }
    //     cout<<"\n";
    // }

    /*
        Pattern :
                1
                2 3
                4 5 6
                7 8 9 10
    */

    int num = 1;
    for(int i=0 ; i<n ; i++)
    {
        for(int j = 0; j<i+1 ; j++)
        {
            cout<<num <<" ";
            num++;
        }
        cout<<"\n";
    }

    /*
        Pattern :
                A
                B C
                D E F
                G H I J
    */

    char ch = 'A';
    for(int i=0 ; i<n ; i++)
    {
        for(int j = 0; j<i+1 ; j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<"\n";
    }

}