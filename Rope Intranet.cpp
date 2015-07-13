#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <cstring>

using namespace std;

int main()
{
    ifstream in("A-large-practice.in");
    ofstream out("A-large-practice.out");

    int t,cont=1; in>>t;

    while(t-->0)
    {
        int w,sum=0; in>>w;

        int l[w],r[w];

        for(int i=0;i<w;i++)
        {
            in>>l[i]>>r[i];
        }

        for(int i=0;i<w;i++)
        {
            for(int j=(i+1);j<w;j++)
            {
                if((l[j]>l[i] && r[j]<r[i]) || (l[j]<l[i] && r[j]>r[i])) sum++;
            }
        }

        out<<"Case #"<<cont++<<": "<<sum<<endl;
    }

    return 0;
}
