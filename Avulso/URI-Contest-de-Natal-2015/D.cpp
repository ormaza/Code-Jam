#include <iostream>

using namespace std;

int main()
{
    int m,n,p;
    while(cin>>m>>n>>p)
    {
        if(m==0 && n==0 && p==0) break;
        else
        {
            int l,lights=0;
            while(p--)
            {
                cin>>l;
                l--;
                l%=n;
                lights+=(n-l);
            }
            cout<<"Lights: "<<lights<<endl;
        }
    }
    return 0;
}
