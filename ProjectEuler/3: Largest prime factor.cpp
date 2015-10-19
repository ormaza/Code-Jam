#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    long long t;
    cin>>t;

    while(t-->0)
    {
        long long n;
        cin>>n;

        long long prim=2;

        while(n!=1)
        {
            if((n%prim)==0) n/=prim;
            else
            {
                if(prim==2) prim++;
                else prim+=2;
            }
            if((prim*prim)>n)
            {
                prim=n;
                break;
            }
        }

        cout<<prim<<endl;
    }
    return 0;
}
