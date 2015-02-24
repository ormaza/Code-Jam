#include <iostream>

using namespace std;

int main()
{
    long long n;

    while(cin>>n)
    {
        if(n==1) cout<<"1"<<endl;
        else if(n==2) cout<<"2"<<endl;
        else if(n==3) cout<<"3"<<endl;
        else if(n%2==0) cout<<"1"<<endl;
        else
        {
            bool primo=true;
            for(long long i=3;(i^2)<n;i+=2)
            {
                if(n%i==0)
                {
                    cout<<"1"<<endl;
                    primo=false;
                    break;
                }
            }

            if(primo) cout<<"2"<<endl;
        }

    }

    return 0;
}

