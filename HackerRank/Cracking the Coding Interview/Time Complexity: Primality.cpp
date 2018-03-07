#include <cstdio>
#include <iostream>

using namespace std;

bool isPrime(int n){
    if(n==2) return true;
    else if(n%2==0 || n<2) return false;
    else{
        for(int i=3;i*i<=n;i+=2){
            if(n%i==0) return false;
        }
    }
    return true;
}

int main(){
    int p;
    cin >> p;
    for(int a0 = 0; a0 < p; a0++){
        int n;
        cin >> n;

        if(isPrime(n)) cout<<"Prime"<<endl;
        else cout<<"Not prime"<<endl;
    }
    return 0;
}
