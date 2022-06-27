class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int length = nums.size();
        int accumulated_total = 0;
        int left_index_total = 0;
        
        if(length < 1){
            return -1;
        }
    
        for(int i = 0; i < length; i++){
            accumulated_total = nums[i] + accumulated_total;
     
        }
        
        for(int i = 0;i < length; i++){
            
            if(left_index_total == accumulated_total - left_index_total - nums[i]){
            return i;
            }
        left_index_total += nums[i];
        }
        return -1;
    }
};
