/*
So between the Approaches i have seen
i liked the this one the most, 
it is very well explained by neetcode and knowledge center 
where if we define the end cell has a value of 1
from there a cells value will be equal to:

   [Cell] = Right(val) + Down(val)
we from here calculate the value of every cell from the end goal cell

start
|
v

[28] [21] [15] [10] [6] [3] [1]
[7]  [6]  [5]  [4]  [3] [2] [1]
[1]  [1]  [1]  [1]  [1] [1] [1] <- end



the alternative way of getting this is using straight combinatorics 
(finding the numbers of paths in a grid)
where you calculate m+n-2 C n-1
using (m+n-2)! / (n-1)! (m-1)!

 
int numberOfPaths(int m, int n)
{
 
    int path = 1;
    for (int i = n; i < (m + n - 1); i++) {
        path *= i;
        path /= (i - n + 1);
    }
    return path;
}

*/


class Solution {
public:
    int uniquePaths(int m, int n) {
    
        vector<vector<int>> grid(m + 1, vector(n + 1, 0));
        
        grid[1][1] = 1;
        
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                if( i == 1 && j == 1){
                    continue;
                }
                grid[i][j] = grid[i -1][j] + grid[i][j -1];
            }
        }
        return grid[m][n];
    }
};
