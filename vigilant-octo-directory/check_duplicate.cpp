class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int length = nums.size();
        unordered_map<int, int> temp_map;
        
        if(length <= 1){ //check length of vector
            
            return false;
            }
        
        for(int i = 0; i < length; i++){ 
            if(temp_map[nums[i]]){ //check for dup in map    
                return true;
            }
            temp_map[nums[i]]++; //add element
        }
        return false;
    }
};
