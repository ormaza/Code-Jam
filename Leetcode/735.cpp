class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        stack<int> pilha;
        stack<int> pilha2;
        int resultado;
        
        for(int i = 0; i < asteroids.size(); i++) pilha.push(asteroids[i]);
        
        while(!pilha.empty()){
            if(pilha.top() > 0) {
                pilha2.push(pilha.top());
                pilha.pop();
            } else {
                int ele = pilha.top();
                pilha.pop();
                if(pilha.empty()) pilha2.push(ele);
                else if(pilha.top() < 0) pilha2.push(ele);
                else {
                    resultado = pilha.top() + ele;
                    if(resultado == 0){
                        pilha.pop();
                    } else {
                        if(abs(ele) > pilha.top()){
                            pilha.pop();
                            pilha.push(ele);
                        }
                    }
                }
            }
        }
        
        
        while(!pilha2.empty()){
            ans.push_back(pilha2.top());
            pilha2.pop();
        }
        return ans;
    }
};



class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        stack<int> pilha;
        stack<int> pilha2;
        int resultado;
        
        for(int i = 0; i < asteroids.size(); i++) pilha.push(asteroids[i]);
        
        while(!pilha.empty()){
            if(pilha.top() > 0) {
                if(pilha2.empty()){
                    pilha2.push(pilha.top());
                    pilha.pop();
                } else if(pilha2.top() > 0){
                    pilha2.push(pilha.top());
                    pilha.pop();
                } else {
                    int ele = pilha2.top();
                    pilha2.pop();
                    resultado = pilha.top() + ele;
                    if(resultado == 0){
                        pilha.pop();
                    } else {
                        if(abs(ele) > pilha.top()){
                            pilha.pop();
                            pilha2.push(ele);
                        }
                    }
                }
                
            } else {
                int ele = pilha.top();
                pilha.pop();
                if(pilha.empty()) pilha2.push(ele);
                else if(pilha.top() < 0) pilha2.push(ele);
                else {
                    resultado = pilha.top() + ele;
                    if(resultado == 0){
                        pilha.pop();
                    } else {
                        if(abs(ele) > pilha.top()){
                            pilha.pop();
                            pilha.push(ele);
                        }
                    }
                }
            }
        }
        
        
        while(!pilha2.empty()){
            ans.push_back(pilha2.top());
            pilha2.pop();
        }
        //reverse(ans.begin(), ans.end());
        return ans;
    }
};
