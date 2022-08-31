class Solution {
public:
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        
        
        int m = heights.size();
        int n = heights[0].size();
        vector<vector<int>> result;
        
        vector<vector<bool>> pacific(m , vector<bool>(n));
        vector<vector<bool>> atlantic(m, vector<bool>(n));
        
        for(int i = 0; i < m; i++){
            dfs(heights, pacific, i, 0);
            dfs(heights, atlantic, i, n-1);
        }
        
        for(int j = 0; j < n; j++){
            dfs(heights, pacific, 0 , j);
            dfs(heights, atlantic, m - 1, j);
        }
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(pacific[i][j] && atlantic[i][j]){
                    result.push_back({i,j});
                }
            }
        }
        return result;
    }
    
    void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int r, int c){
        
                
        int m = grid.size();
        int n = grid[0].size();
        visited[r][c] = true;
        
        
        
        if(r - 1 >= 0 && visited[r - 1][c] != true && grid[r- 1][c] >= grid[r][c]){
            dfs(grid, visited, r - 1, c);
        }
        if(r + 1 < m && visited[r + 1][c] != true && grid[r + 1][c] >= grid[r][c]){
            dfs(grid, visited , r + 1, c);
        } 
        if(c - 1 >= 0 && visited[r][c - 1] != true && grid[r][c - 1] >= grid[r][c]){
            dfs(grid, visited, r, c -1);
        }
        if(c + 1 < n && visited[r][c + 1] != true && grid[r][c + 1] >= grid[r][c]){
            dfs(grid,visited, r, c + 1);
        }
    }
};
