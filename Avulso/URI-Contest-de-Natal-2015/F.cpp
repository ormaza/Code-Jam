#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<pair<string,int>> order;
    string nome;
    int pos=0;
    vector<string> nomes;
    while(getline(cin,nome))
    {
        nomes.push_back(nome);
        for(int i=0;i<nome.size();i++) nome[i]=toupper(nome[i]);
        order.push_back(std::make_pair(nome,pos++));
    }
    sort(order.begin(),order.end());
    cout<<nomes[order[order.size()-1].second]<<endl;
}
