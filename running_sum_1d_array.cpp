class Solution {
public:
  
    vector<int> runningSum(vector<int>& nums) {
        
        int length = nums.size();
        vector<int> temp_vec(length);
        
        if(length == 0){
            return temp_vec;
        }
        
        temp_vec[0] = nums[0];
        for(int i = 1; i < length; i++){
            temp_vec[i] = nums[i] + temp_vec[i - 1];
        }
        return temp_vec;
    }
};
