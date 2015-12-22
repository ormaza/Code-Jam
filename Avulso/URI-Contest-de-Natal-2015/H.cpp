#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int t; cin>>t;
    bool primeira_iteracao=true;
    bool finding=true;
    while(t--)
    {
        if(primeira_iteracao) {cin.ignore(); primeira_iteracao=false;}
        string msg;
        getline(cin,msg);
        int i;
        for(i=0;i<msg.size();i++)
        {
            if(msg.size()-i<8) break;
            if(msg.substr(i,8)=="oulupukk")
            {
                msg[i-1]='J';
                msg[i+8]='i';
            }
        }
        cout<<msg<<endl;
    }

}
