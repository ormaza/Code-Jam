#include<stdio.h>
#include<cstdio>
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int t,n; cin>>t;
    double d,kmax,k,calc,ans,s;
    for(int caso=1;caso<=t;caso++){
       kmax = 0;
       cin>>d>>n;
       while(n--){
            cin>>k>>s;
            calc = (d-k)/s;
            kmax = max(calc,kmax);
       }
       ans = d/kmax;
       cout<<"Case #"<<caso<<": ";
       printf("%.6f\n",ans);
    }
    return 0;
}
