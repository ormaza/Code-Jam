class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<string> words;
        
        for(int i = 0; i < strs.size(); i++) {
            string word = strs[i];
            sort(word.begin(), word.end());
            words.push_back(word);
        }
        
        for(int i = 0; i < strs.size(); i++){
            vector<string> miniAns;
            if(words[i] != "-1"){
                miniAns.push_back(strs[i]);
                
                for(int j = i + 1; j < strs.size(); j++){
                    if(words[i] == words[j]) {
                        miniAns.push_back(strs[j]);
                        words[j] = "-1";
                    }
                }
                
                words[i] = "-1";
                ans.push_back(miniAns);
            }
        }
        
        
        return ans;
    }
};
