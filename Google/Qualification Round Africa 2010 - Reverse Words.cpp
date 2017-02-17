#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int n; cin>>n;
	int cont=1;
	cin.ignore();
	while(n--)
    {
        string line="";
        getline(cin,line);
        stack<string> pilha;
        string acumula = "";
        for(int i=0;i<line.size();i++)
        {
            if(line[i]!=' ') acumula+=line[i];
            else
            {
                pilha.push(acumula);
                acumula="";
            }
        }
        pilha.push(acumula);
        cout<<"Case #"<<cont++<<": ";
        string print;
        while(!pilha.empty())
        {
            print = pilha.top();
            pilha.pop();
            cout<<print<<" ";
        }
        cout<<endl;

    }
	return 0;
}
