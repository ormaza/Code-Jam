class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        set<string> subconjuntos;
        set<string> repetidos;
        string tmp;
        
        if(s.length() > 10){
                tmp = s.substr(0, 10);
                subconjuntos.insert(tmp);
            
                for(int i = 1; i <= s.length()-10; i++){
                tmp = s.substr(i, 10);
                
                if(subconjuntos.find(tmp) == subconjuntos.end()){
                    subconjuntos.insert(tmp);
                } else {
                    repetidos.insert(tmp);
                }
            }
        }
        
        vector<string> ans(repetidos.begin(), repetidos.end());
        return ans;
    }
};
