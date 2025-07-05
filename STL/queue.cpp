#include<iostream>
#include<queue>
using namespace std;


int main()
{
    queue<int> que;

    que.push(1);
    que.push(2);
    que.push(3);
    que.push(4);


    while(!que.empty())
    {
        cout<< que.front() <<" ";
        que.pop();
    }
}