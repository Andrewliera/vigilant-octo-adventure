class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        
        int arrow_count = 1;
        int curr_location = points[0][1];
        int num_of_balloons = points.size();
        
        sort(points.begin(), points.end());

        
        for(int i = 0; i < num_of_balloons; i++){
            if(points[i][0] <= curr_location){
                curr_location = min(curr_location, points[i][1]);
            }
            else{
                curr_location = points[i][1];
                arrow_count++;
            }
        }
        return arrow_count;
    }
};