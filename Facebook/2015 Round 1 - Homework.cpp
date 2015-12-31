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
    int caso=1;
    while(t--)
    {
        long long a,b,k;
        cin>>a>>b>>k;

        //sieve of eratosthenes
        bool primos[b+1];
        long long primacity[b+1];
        for(long long i=2;i<=b;i++) {primos[i]=true; primacity[i]=0;}
        for(long long i=2;i<=b;i++)
        {
            if(primos[i])
            {
                primacity[i]=1;
                for(long long j=2*i;j<=b;j+=i) {primos[j]=false; primacity[j]++;}
            }
        }

        //searching primacity k
        long long cont=0;
        for(long long i=a;i<=b;i++)
        {
            if(primacity[i]==k) cont++;
        }
        cout<<"Case #"<<caso++<<": "<<cont<<endl;
    }
  return 0;
}
