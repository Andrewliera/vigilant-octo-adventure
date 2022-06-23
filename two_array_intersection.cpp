class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
       
        unordered_map<int, int> temp_map;
        vector<int> intersection_result;
        
        int length1 = nums1.size();
        int length2 = nums2.size();
        
        if(length1 > length2){
            swap(nums1, nums2);
            swap(length1, length2);
        }
        
        for(const auto element : nums1){
            temp_map[element]++;
        }
        for(const auto element : nums2){
            if(temp_map.find(element) != temp_map.end() && temp_map[element] > 0){
                intersection_result.push_back(element);
                temp_map[element]--;
            }
        }
        return intersection_result;
    }
};
