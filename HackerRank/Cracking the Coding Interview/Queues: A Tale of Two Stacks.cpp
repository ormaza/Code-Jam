//INACABADO------------------------------<
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;

class MyQueue {
  
    public:
        stack<int> stack_d, stack_r;   
        void push(int x) {
            while(!stack_r.empty()){
                int ele = stack_r.top();
                stack_r.pop();
                stack_d.push(ele);
            }
            stack_d.push(x); 
        }

        void pop() {
            while(!stack_d.empty()){
                int ele = stack_d.top();
                stack_d.pop();
                stack_r.push(ele);
            }
            stack_r.pop();
        }

        int front() {
            while(!stack_d.empty()){
                int ele = stack_d.top();
                stack_d.pop();
                stack_r.push(ele);
            }
            return stack_r.top();
        }
};

int main() {
    MyQueue q1;
    int q, type, x;
    cin >> q;
    
    for(int i = 0; i < q; i++) {
        cin >> type;
        if(type == 1) {
            cin >> x;
            q1.push(x);
        }
        else if(type == 2) {
            q1.pop();
        }
        else cout << q1.front() << endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
