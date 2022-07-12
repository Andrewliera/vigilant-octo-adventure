//very good explanation by codewithsunny, tutorialcup & tutorialspoint

class Solution {
public:
    
    bool flagged_calc(vector<int> &square_side_vector, int pos){
        
        for(int i =0; i< pos; i++){
            if(square_side_vector[i] == square_side_vector[pos]){
                return true;
            }
        }   
        return false;
    }
    
    bool solveSquare(int index, vector<int> &square_side_vector, vector<int> &matchsticks, int target_number){
        
        if(index == matchsticks.size()){
            return square_side_vector[0] == target_number &&
                   square_side_vector[1] == target_number &&
                   square_side_vector[2] == target_number &&
                   square_side_vector[3] == target_number;
            }
        
        for(int i = 0; i < 4; i ++){
            
            if(square_side_vector[i] + matchsticks[index] > target_number || flagged_calc(square_side_vector, i)){
                continue;}
            
            square_side_vector[i] += matchsticks[index];
            
            if(solveSquare(index + 1, square_side_vector, matchsticks, target_number)){
                return true;}
               
               square_side_vector[i] -= matchsticks[index];
               }
             
               return false;
               }
    
    bool makesquare(vector<int>& matchsticks) {
        
        int length = matchsticks.size();
        int sum = 0;
        for(int i =0; i < length; i++){
            sum += matchsticks[i];
        }
        
        if(sum%4 != 0 || length < 4){
            return false;
        }
        int side = sum/4;
        sort(matchsticks.rbegin(),matchsticks.rend());
        vector<int> square_side_vector(4,0);
        
        
        if(matchsticks[0] > side){
            return false;
        }
        
        return solveSquare(0,square_side_vector, matchsticks, side);
    }
};
