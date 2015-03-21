#include <iostream>
#include <stack>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int caso=1;

    while(n!=0)
    {
        bool go=false;
        string line;
        std::getline(std::cin,line);

        stack<string> word;
        string acumula="";

        for(int i=0;i<line.size();i++)
        {
            if(line[i]!=' ')
            {
                acumula+=line[i];
            }
            else
            {
                word.push(acumula);
                acumula="";
            }
            if(i==line.size()-1)
            {
                word.push(acumula);
                acumula="";
            }
            go=true;
        }

        if(go)
        cout<<"Case #"<<caso++<<": ";

        while(!word.empty())
        {
            cout<<word.top();
            word.pop();
            if(!word.empty()) cout<<" ";
        }

        if(go)
        {
            cout<<endl;
            n--;
            line="";
        }
    }
    return 0;
}
