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

        vector<long long> fib;

        long long sum=2;

        fib.push_back(1); fib.push_back(2);

        long long i;

        for(i=2;i<n;i++)
        {
            fib.push_back(fib[i-1]+fib[i-2]);
            if(fib[i]>n) break;
            else if(fib[i]%2==0) sum+=fib[i];
        }

        cout<<sum<<endl;
    }
    return 0;
}
