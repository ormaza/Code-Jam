class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0) return 0;
        string max = ""; max += s[0];
        string atual = ""; atual += s[0];
        for(int i = 1; i < s.length(); i++){
            if(atual.find(s[i]) != std::string::npos){
                if(atual.length() > max.length()) max = atual;
                int occur = atual.find(s[i]);
                atual = atual.substr(occur+1,atual.length()-occur);
                atual += s[i];
            } else atual += s[i];
        }
        if(atual.length() > max.length()) max = atual;
        return max.length();
    }
};
