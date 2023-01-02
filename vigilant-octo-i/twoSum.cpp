class Solution {
  public:
    vector<int> twoSum(vector<int>& nums, int target){
      int length = nums.size();
      map<int, int> temp_map;
      vector<int> indices;

      for(int i = 0; i < length; i++){
        int temp_complement = target - nums[i];
        
        if(temp_map.find(temp_complement) != temp_map.end()){

          indeces.push_back(i);
          indeces.push_back(temp_map.find(temp_complement)->second);
          break;
        }
        else{
          temp_map[nums[i]] = i;
        }
      }
      return indeces;
    }
};
