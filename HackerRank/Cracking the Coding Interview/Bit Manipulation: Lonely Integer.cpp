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
#include <unordered_map>

using namespace std;

int lonely_integer(vector < int > a) {
    bool mark [a.size()];
    for(int i=0;i<a.size();i++) mark[i] = true;
    
    for(int i=0;i<a.size()-1;i++){
        int e = a[i];
        for(int j=i+1;j<a.size();j++){
            if(e==a[j]){ mark[i]=false; mark[j]=false;}
        }
    }
    for(int i=0;i<a.size();i++){
        if(mark[i]) return a[i];
    }
    return a[a.size()-1];
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    cout << lonely_integer(a) << endl;
    return 0;
}
