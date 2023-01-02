class Solution {
private:
    void dfs(int node_idx, vector<vector<int>>& graph, vector<vector<int>>& all_paths, vector<int>& curr_path, int target){

        curr_path.push_back(node_idx);

        if(node_idx == target){
            all_paths.push_back(curr_path);
            return;
        }
        if(graph[node_idx].empty()){
            return;
        }

        int length = graph[node_idx].size();
        for(int i = 0; i < length; i++){
            int edge = graph[node_idx][i]; 
            dfs(edge, graph, all_paths, curr_path, target);
            curr_path.pop_back();
        }
    }

public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
       
        int target_node = (graph.size() - 1);
        vector<vector<int>> all_paths;
        vector<int> curr_path;
        int root = 0;
        dfs(root, graph, all_paths,curr_path, target_node);
        return all_paths;
    }
};