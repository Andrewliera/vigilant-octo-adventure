//big explenations from algotree.org & tutorialcup.com for leetcode problems like this
//explains both BFS & DFS approaches

class Solution {
public:
    
    
    int bfs(vector<vector<int>>& grid, int row, int col){
        
        int m = grid.size();
        int n = grid[0].size();
        int temp_area = 1;
        
        queue<pair<int,int>> temp_queue;
        
        temp_queue.push({row, col});  //<- push cell into queue
        grid[row][col] = 0;               //<- mark it as zero so we dont revisit
        
        vector <int> directions({-1,0,1,0,-1});
        
        while(!temp_queue.empty()){
            
            int y = temp_queue.front().first;
            int x = temp_queue.front().second;
            temp_queue.pop();
            
            
            for(int i = 0; i < 4; i++){ // traverse in four directions
                
                
                int r = y + directions[i];
                int c = x + directions[i + 1];
                
                if(r >= 0 && r < m && 
                    c >= 0 && c < n && 
                     grid[r][c] == 1){
                    
                    grid[r][c] = 0;
                    temp_area++;
                    
                    temp_queue.push({r,c});
            
                }
            }
            
        }
        return temp_area;
        
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        int maxArea = 0;
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++ ){
                
                if(grid[i][j] == 1){
                    maxArea = max(maxArea, bfs(grid, i , j));
                }
            }
        }
        return maxArea;
        
        
        
    }
};
