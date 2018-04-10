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

long long solve(long long v[], long long n){
    long long pos;
    bool testing;
    do{
        testing = false; pos = -1;
        for(long long i=0;i<n-2;i++){
        if(v[i]>v[i+2]) {swap(v[i],v[i+2]); testing=true;}
        }
    } while(testing);

    for(long long i=0;i<n-1;i++)
    if(v[i]>v[i+1]){ pos=i; break;}

    return pos;
}

int main(){
    int t; cin>>t;
    long long n;
    for(int caso=1;caso<=t;caso++){
        cin>>n;
        long long v[n];
        for(long long i=0;i<n;i++) cin>>v[i];
        long long ans = solve(v,n);

        if(ans==-1) cout<<"Case #"<<caso<<": OK"<<endl;
        else cout<<"Case #"<<caso<<": "<<solve(v,n)<<endl;
    }
    return 0;
}
