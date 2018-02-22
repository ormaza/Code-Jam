/*
ID: ormazab
TASK: ride
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string a,b;
    int sa=1; int sb=1;
    while(fin>>a>>b){
        for(int i=0;i<a.length();i++) sa*=((int)a[i]-64);
        for(int i=0;i<b.length();i++) sb*=((int)b[i]-64);


        if((sa%47)==(sb%47)){
            fout<<"GO"<<endl;
        } else {
            fout<<"STAY"<<endl;
        }
    }
    return 0;
}
