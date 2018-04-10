#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

int dano_total(vector<int> S){
    int dano = 0;
    for(int i=0;i<S.size();i++){
         dano+=S[i];
    }
    return dano;
}

int solve(int d, string alg){
    int hack = 0;
    vector<int> S;

    int dano = 0;
    int force = 1;
    for(int i=0;i<alg.size();i++){
        if(alg[i]=='C') force*=2;
        else{
            dano+=force;
            S.push_back(force);
        }
    }

    if(d >= dano) return 0;
    else {
        int trocas = 0;
        int i=0;
        while(i<S.size()){
            if(S[i]!=1){S[i]/=2; trocas++; continue;}
            if(d >= dano_total(S)) return trocas;
            i++;
        }
    }

    return -1;

}

int main(){
    int t; cin>>t;
    int d, ans; //maximo dano
    string alg="";
    for(int caso=1;caso<=t;caso++){
        cin>>d;
        cin>>alg;
        ans = solve(d,alg);

        if(ans==-1) cout<<"Case #"<<caso<<": "<<"IMPOSSIBLE"<<endl;
        else cout<<"Case #"<<caso<<": "<<ans<<endl;
    }
    return 0;
}
