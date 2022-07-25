class Solution {
public:
    
    int find_first(vector<int>& nums, int target){
        
        int result = -1;
        int min = 0;
        int max = nums.size() - 1;
        int temp_p;
        
        while(min <= max){
            
            temp_p = min + ( max - min)/2;
            if(nums[temp_p] < target){
                min = temp_p + 1;
            }
            else if(nums[temp_p] > target){
                max = temp_p - 1;
            }
            else{
                result = temp_p;
                max = temp_p - 1;
            }  
        }
        return result;
    }
    
    int find_last(vector<int>& nums, int target){
        
        int result = -1;
        int min = 0;
        int max = nums.size() - 1;
        int temp_p;
        
        while(min <= max){
            temp_p = min + (max - min)/2;
            if(nums[temp_p] < target){
                min = temp_p + 1;
            }
            else if(nums[temp_p] > target){
                max = temp_p - 1;
            }
            else{
                result = temp_p;
                min = temp_p + 1;
            }
        }
        return result;
        
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> target_pos(2);
        
        target_pos[0] = find_first(nums, target);
        target_pos[1] = find_last(nums, target);
        
        return target_pos;
        
    }
};
