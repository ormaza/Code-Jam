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

using namespace std;

int number_needed(string a, string b) {

    int del = 0;
    int cont_a [200]; int cont_b [200];

    for(int i = 'a'; i<='z';i++){ cont_a[i]=0; cont_b[i]=0;}

    for(int i=0;i<a.length();i++){
        char ch = a[i];
        cont_a[ch]++;
    }
    for(int i=0;i<b.length();i++){
        char ch = b[i];
        cont_b[ch]++;
    }

    for(int i = 'a'; i<='z';i++){
        del+= abs(cont_a[i]-cont_b[i]);
    }

    return del;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}
