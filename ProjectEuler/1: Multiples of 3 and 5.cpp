#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

long long sn(int d,int n)
{
        long long np=n-1;
        np=np-(np%d);
        long long r=(np/d);
        long long soma=(r*(d+np))/2;
        return soma;
}

int main()
{
    long long teste;
    cin>>teste;

    while(teste-->0)
    {
        long long n;
        cin>>n;
        long long sum=0,np;

        sum = sn(3,n)+sn(5,n)-sn(15,n);

        cout<<sum<<endl;

    }
}
