#include <map>
#include <set>
#include <list>
#include <cmath>
//INACABADO

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

int casos(int s){
    if(s==0) return 1;
    else if(s<0) return 0;
    else return casos(s-1)+casos(s-2)+casos(s-3);
}


int main(){
    int s;
    cin >> s;
    for(int a0 = 0; a0 < s; a0++){
        int n;
        cin >> n;
        cout<<casos(n)<<endl;
    }
    
    return 0;
}
