#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

long long Sn(long long target,int n)
{
        long long p = floor(target/n);
        long long ans = n*(p*(p+1))/2;
        return ans;
}

int main()
{
    long long teste;
    cin>>teste;

    while(teste--)
    {
        long long target;
        cin>>target;
        target--;
        long long sum = Sn(target,3) + Sn(target,5) - Sn(target,15);
        cout<<sum<<endl;
    }
}
