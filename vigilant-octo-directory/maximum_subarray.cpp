lass Solution {
public:
    int maxSubArray(vector<int>& nums) {
       
        int highestMax = nums[0];
        int tempMax = 0;
        int length = nums.size();
        
        for(int i = 0; i < length; i++){
            
            tempMax = max(tempMax + nums[i] ,nums[i]);
            highestMax = max(highestMax, tempMax);
            
        }
        return highestMax; //kadanes algorithm
    }
};
