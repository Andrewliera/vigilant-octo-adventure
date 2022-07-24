/*
since the matrix columns & rows are sorted an optimal solution here is as followed

   (if target < index)
              
              c-- to go back   
           <-   
[1 ,4 ,7 ,11 ,15]<-start here        
[2 ,5 ,8 ,12 ,19]   
[3 ,6 ,9 ,16 ,22]        (if target > index)
[10,13,14,17 ,24]    |   r++ to go down
[18,21,23,26 ,30]    v

hoping i didn't get that backwards
*/


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        int r = 0;
        int c = n-1;
        
        while(r < m && c >= 0){
            
            if(matrix[r][c] == target){
                return true;
            }
            
            else if(matrix[r][c] > target){
                c--;
            }
            else{
                r++;
            }
        }
        return false;
    }
};
