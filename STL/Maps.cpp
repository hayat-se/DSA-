#include<iostream>
#include<map>
#include<utility>
using namespace std;


int main()
{
    map<string , string> m;

    m["name"] = "Hayat Nabi";
    m["address"] = "Badwan Bala";
    m["father_name"] = "Muhammad Nabi";

    for(pair<string, string> p : m)
    {
        cout<< p.first <<" : "<< p.second <<endl;
    }
}