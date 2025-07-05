#include<iostream>
using namespace std;


int main()
{
    int nums[10] = {1,2,3,4,-1,6,7,8,9,10};
    bool searched = false;
    int searchNum;
    int key;
    cout<<"Enter Number to find : ";
    cin>>searchNum;

    for(int i=0 ; i<10 ; i++)
    {
        if(searchNum == nums[i])
        {
            searched = true;
            key = i;
        }
    }

    if(searched == true)
    {
        cout<<"Numbered Find successfuly ...........\n";
        cout<<searchNum <<" is at index : "<<key <<endl;
    }
    else
    {
        cout<<"Numbere not found ......\n";
    }
}