class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        vector<int> frequencia;
        for(int i = 0; i < nums.size(); i++) frequencia.push_back(0);
        for(int i = 0; i < nums.size(); i++) frequencia[nums[i]-1]++;
        for(int i = 0; i < nums.size(); i++){
           if(frequencia[i] > 1){
               ans.push_back(i+1);
               break;
           }
        }
        for(int i = 0; i < nums.size(); i++){
           if(frequencia[i] == 0) {
               ans.push_back(i+1);
               break;
           }
        }
        return ans;
    }
};
