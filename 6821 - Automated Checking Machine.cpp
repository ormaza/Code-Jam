#include <iostream>

using namespace std;

int main()
{
    int x[5],y[5];

    while(cin>>x[0]>>x[1]>>x[2]>>x[3]>>x[4]>>y[0]>>y[1]>>y[2]>>y[3]>>y[4])
    {
        bool verif=true;

         for(int i=0;i<5;i++)
        {
            if(y[i]==x[i])
            {
                cout<<"N"<<endl;
                verif=false;
                break;
            }
        }
        if(verif)cout<<"Y"<<endl;
    }

    return 0;
}

