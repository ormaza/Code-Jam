class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int ocorrenciasFirst[26];
        int ocorrencias[26];
        for(int i = 0; i < 26; i++){
            ocorrencias[i] = 0;
            ocorrenciasFirst[i] = 0;
        } 
        
        string firstWord = words[0];
        for(int j = 0; j < firstWord.length(); j++){
            ocorrenciasFirst[firstWord[j]-'a']++;
            ocorrencias[firstWord[j]-'a']++;
        }
        
        for(int i = 1; i < words.size(); i++){
            string word = words[i];
            int ocorrenciasAtual[26];
            for(int k = 0; k < 26; k++) ocorrenciasAtual[k] = 0;
            
            for(int j = 0; j < word.length(); j++){
                ocorrenciasAtual[word[j]-'a']++;
            }
            
            for(int z = 0; z < 26; z++){
                ocorrencias[z] = min(ocorrencias[z], ocorrenciasAtual[z]);
            }
        }
        
        vector<string> ans;
        for(int i = 0; i < 26; i++){
            if(ocorrencias[i]) {
                char res = 97+i;
                string a = "";
                a+=res;
                for(int cont = 0; cont < ocorrencias[i]; cont++) ans.push_back(a);
            }
        }
        return ans;
    }
};
