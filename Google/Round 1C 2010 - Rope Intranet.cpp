#include <iostream>

using namespace std;

int main()
{
    int t,cont=1; cin>>t;

    while(t--)
    {
        int w,sum=0; cin>>w;

        int l[w],r[w];

        for(int i=0;i<w;i++)
        {
            cin>>l[i]>>r[i];
        }

        for(int i=0;i<w;i++)
        {
            for(int j=(i+1);j<w;j++)
            {
                if((l[j]>l[i] && r[j]<r[i]) || (l[j]<l[i] && r[j]>r[i])) sum++;
            }
        }

        cout<<"Case #"<<cont++<<": "<<sum<<endl;
    }

    return 0;
}
