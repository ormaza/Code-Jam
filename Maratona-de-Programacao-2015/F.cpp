#include <iostream>
using namespace std;

int noff;
double fat(int n)
{
    double fat=1;
    while(n)
    {
        fat*=n--;
        if(fat>noff){fat=0;break;}
    }
    return fat;
}

int main()
{
        int n;
        while(cin>>n)
        {
            noff=n;
            double sum=0,k=0,it=n/2;
            if(n==1) k=1;
            else if(n==2) k=2;
            else{
            while(it)
            {
                double f=fat(it);
                //DEBUG
                //if(sum+f<=n) cout<<"E"<<it<<" ";
                //END
                if(f!=0){
                while(sum<=n) {sum+=f; k++;}
                if(sum>n) {sum-=f; k--;}}
                it--;
            }}
            cout<<k<<endl;
        }
    return 0;
}
