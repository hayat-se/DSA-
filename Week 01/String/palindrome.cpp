#include<iostream>
using namespace std;

bool isPalindrome(string str)
{
    string compare="";
    for(int i=str.length() -1 ; i>=0 ; i--)
    {
        compare += str[i];
    }
       
    if(compare == str)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string pal = "racecar";
    cout << isPalindrome(pal);


}