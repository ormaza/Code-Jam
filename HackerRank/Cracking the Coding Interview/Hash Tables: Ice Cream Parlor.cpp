#include <bits/stdc++.h>

using namespace std;
map<int,bool> flavors;


int busca(vector <int> arr, int val, int init){
    for(int i=init;i<arr.size();i++){
        if(arr[i]==val) return i;
    }
    return -1;
}
void print(int i, int index){
    int minimo = min(i,index);
    int maximo = max(i,index);
    cout<<minimo+1<<" "<<maximo+1<<endl;
}
void solve(vector <int> arr, int money) {
    int val,res,index;
    for(int i=0;i<arr.size();i++){
        val = arr[i];
        res = money-val;
        if(res==val && flavors[val]){
            index = busca(arr,res,i+1);
            print(i,index);
            break;
        } else if(res!=val && flavors.count(res)){
            index = busca(arr,res,0);
            print(i,index);
            break;
        }
    }
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        flavors.clear();
        int money;
        cin >> money;
        int n;
        cin >> n;
        vector<int> arr(n);
        int cost;
        for(int arr_i = 0; arr_i < n; arr_i++){
            cin>>cost;
            arr[arr_i] = cost;
            if(flavors.count(cost)) flavors[cost]=true;
            else flavors.insert(make_pair(cost,false));
        }
        solve(arr, money);
    }
    return 0;
}
