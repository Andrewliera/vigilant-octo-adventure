
class Solution {
public:

    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        
        int length = capacity.size();
        int curr_additionalRocks = additionalRocks;
        vector<int> space_left (length);
        int count = 0;

        for(int i = 0; i < length; i++){
            space_left[i] = capacity[i] - rocks[i];
        }    
        sort(space_left.begin(), space_left.end());

        for(int i = 0; i < length; i++){
            
            if(curr_additionalRocks >= space_left[i]){
                curr_additionalRocks -= space_left[i];
                count++;
            }
        }
        return count;
    }
    
};
