class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        vector<int> temp;
        
        for(int i : nums){
            int curr_pos = lower_bound(temp.begin(), temp.end(), i) - temp.begin();
            if(curr_pos == temp.size()){
                temp.push_back(i);
            }
            else{
                temp[curr_pos] = i;
            }
        }
        return temp.size();
        
    }
};
