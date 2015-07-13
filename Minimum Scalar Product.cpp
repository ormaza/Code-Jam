#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <cstring>

using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
    //ifstream in("A-large-practice.in");
    //ofstream out("A-large-practice.out");

    int t; in>>t; int cont=1;

    while(t-->0)
    {
        int n; in>>n;

        int v1[n],v2[n];

        for(int i=0;i<n;i++)
            in>>v1[i];

        for(int i=0;i<n;i++)
            in>>v2[i];

        qsort(v1,n,sizeof(int),compare);
        qsort(v2,n,sizeof(int),compare);

        long int sum=0;

        for(int i=0;i<n;i++)
        {
            sum+=(v1[i]*v2[n-i-1]);
        }

        out<<"Case #"<<cont++<<": "<<sum<<endl;
    }
    return 0;
}
