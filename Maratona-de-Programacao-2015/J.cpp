#include <iostream>
using namespace std;

int main()
{
    int j,r;
    while(cin>>j>>r)
    {
        int pontos[j];
        while(r--)
        {
            for(int i=0;i<j;i++) cin>>pontos[i];
        }
        int maximo=0,k;
        for(int i=j-1;i>=0;i--)
        {
            if(pontos[i]>maximo) {maximo=pontos[i]; k=i+1;}
        }
        cout<<k<<endl;
    }
    return 0;
}
