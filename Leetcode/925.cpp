class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int j = 0;
        int k;
        string iguais;
        for(int i = 0; i < name.length(); i++){
            iguais = "";
            iguais += name[i];
            k = i;
            if(k < name.length() -1){
                while(name[k] == name[k+1]){
                iguais += name[i];
                k++;
                if(k > name.length()) break;
                }
            }
            
         
            if(iguais == typed.substr(j,iguais.length())){
                j = j + iguais.length();
                while(name[i] == typed[j]){
                    j++;
                    if(j > typed.length()) return true;
                } 
                i = i + iguais.length() - 1;
            } else {
                cout << iguais << endl;
                cout << typed.substr(j,iguais.length());
                cout << (iguais == typed.substr(j,iguais.length()));
                return false;
            }
        }
        while(j < typed.length()){
            if(typed[j] != iguais[0]) return false;
        }
        return true;
    }
};
