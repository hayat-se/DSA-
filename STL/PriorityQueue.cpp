#include<iostream>
#include<queue>
using namespace std;


int main()
{
    // priority_queue<int> pq;   // Decending order
    priority_queue<int, vector<int> , greater<int>> pq;  // Accending order


    pq.push(1);
    pq.push(5);
    pq.push(8);
    pq.push(2);

    /*
        If you want to print in smallest -> greatest order then write this
        priority_queue<int , vector<int>, greter<int>> pq;
    */

    while(!pq.empty())
    {
        cout<< pq.top() << " ";
        pq.pop();
    }

}