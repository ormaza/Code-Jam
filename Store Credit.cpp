#include <iostream>

using namespace std;

int main()
{
    int c,n,i;

    cin>>n;

    while(n>0)
    {
        int caso=1;
        cin>>c;
        cin>>i;

        int l[i];

        for(int a=0;a<i;a++)
        {
            cin>>l[a];
        }

        bool para=false;

        for(int cont=0;cont<i;cont++)
        {
            int e=cont+1; //elemento seguinte

            while(e<=i)
            {
                if(l[cont]+l[e]==c)
                {
                    cout<<"Case #"<<caso<<": "<<cont+1<<" "<<e+1<<endl;
                    para=true;
                    break;
                }
                else
                    e++;
            }

            if(para){break;}

        }
        n--;
        caso--;
    }
    return 0;
}
