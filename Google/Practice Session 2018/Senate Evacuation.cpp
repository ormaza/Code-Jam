#include<stdio.h>
#include<cstdio>
#include<iostream>
#include<math.h>

using namespace std;

bool special(int p[], int n){
    int cont=0;
    for(int i=0;i<n;i++){
        if(p[i]>1) return false;
        else if(p[i]==1) cont++;
    }
    if(cont==3) return true;
    return false;
}

bool verifica(int p[], int n){
    for(int i=0;i<n;i++){
        if(p[i]>0) return true;
    }
    return false;
}

string solve(int p[], int n){
    string ans="";
    int maxA,maxB,posA,posB;
    bool keep = true;
    bool especial;

    while(keep){
        maxA=-1; maxB=-1;

        for(int i=0;i<n;i++){
            if(p[i]>maxA){
                posA = i;
                maxA = p[i];
            } else if(p[i]>maxB){
                posB = i;
                maxB = p[i];
            }
        }

        especial = special(p,n);
        if(especial){
            ans+=(65+posA);
            ans+=" ";
            p[posA]--;
        } else {
            ans+=(65+posA);
            ans+=(65+posB);
            ans+=" ";
            p[posA]--; p[posB]--;
            keep = verifica(p,n);
        }
    }
    return ans;
}

int main(){
    int t; cin>>t;
    int n;
    for(int caso=1;caso<=t;caso++){
        cin>>n;
        int p[n];
        for(int i=0;i<n;i++) cin>>p[i];
        cout<<"Case #"<<caso<<": "<<solve(p,n)<<endl;
    }
    return 0;
}
