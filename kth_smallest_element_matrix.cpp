/*
so in this problem i liked the binary search by tutorialcup the most

i kept trying to wrap my head around skipping through elements, because we knew the matrix was a perfect square i wantd to treat it a bit like a math problem
but regardless i think this one does it well, because of this sliding window solution they hit us with

*/


class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
    
        int length = matrix.size();    
    
        if(k == 0  || length == 0 || k > length*length){
            return -1;
            }
        if(k == 1){
            return matrix[0][0];
            }
        
        
        int low_window = matrix[0][0];
        int high_window = matrix[length - 1] [length -1]; 
        
        while(low_window < high_window){
            
         int temp = low_window + (high_window - low_window) / 2;
         int count = 0;
         int j = length - 1;
            
        for(int i = 0; i < length; i ++){
            
            while(j >= 0 && matrix[i][j] > temp){
                j--;
            }
            count = count + (j + 1);
        }
            
        if( count < k){
            low_window = temp + 1;
        }
            else{
                high_window = temp;
            }
        }
        return low_window;
    }
};
