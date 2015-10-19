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

        long long sum1=0,sum2=0;

        for(int i=1;i<=n;i++)
        {
           sum1+=(i*i);
           sum2+=i;
        }

        sum2*=sum2;

        long long res;
        res = abs(sum1-sum2);

        cout<<res<<endl;
    }
    return 0;
}
