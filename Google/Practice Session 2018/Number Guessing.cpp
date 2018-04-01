#include<stdio.h>
#include<cstdio>
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int t; cin>>t;
    float a,b,x; //A<x<=B
    float ans;
    int n; //n=guesses
    string judge="";
    while(t--){
        cin>>a>>b>>n;
        while(n--){
            ans=(b-a)/2;
            x=a+ceil(ans);
            cout<<x<<endl;
            cin>>judge;

            if(judge=="TOO_BIG") b=x;
            else if(judge=="TOO_SMALL") a=x;
            else if(judge=="WRONG_ANSWER") return 0;
            else break;
        }
    }
    return 0;
}
