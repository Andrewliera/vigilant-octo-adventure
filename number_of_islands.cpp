class Solution {
private:
    vector<pair<int, int>> directions= {{-1,0},{0,-1},{1,0},{0,1}};
    
    bool check(int x, int y, int n , int m){
        return x >= 0 and y >= 0 and x < n and y < m;
    }
    
    void dfs(vector<vector<char>> &grid, vector<vector<bool>> &visited, int x, int y, int n, int m){
        if(!check(x,y,n,m) or grid[x][y] == '0' or visited[x][y]== true){
            return;
        }        
        visited[x][y] = true;
        for(auto element : directions){
            int x1 = x + element.first;
            int y1 = y + element.second;
            dfs(grid, visited, x1, y1, n , m);
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
    
        int island_count = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        
        for(int i = 0 ; i < n; i ++){
            for(int j = 0 ; j < m ; j ++ ){
                
                if(visited[i][j] == false and grid[i][j] == '1'){
                    island_count++;
                    dfs(grid, visited, i , j , n, m);
                }
                
            }
        }
        return island_count;
    }
};
