class Solution{
public:
    
    vector<int> numSameConsecDiff(int n , int k){
    
        
        vector<int> dp[n + 1];
        for(int i = 1; i <= 9; i++){
            dp[1].push_back(i);
        }
        for(int i = 1; i < n; i++){
            
            set<int> visited;
            for(int j = 0; j < dp[i].size(); j++){
                
                int x = dp[i][j];
                int last_num = x % 10;
                
                
                int digit = last_num + x;
                if(digit >= 0 && digit <= 9 && !visited.count(x * 10 + digit)){
                    dp[i + 1].push_back(x * 10 + digit);
                    visited.insert(x * 10 + digit);
                }
                
                digit = last_num - x;
                if(digit >= 0 && digit <= 9 && !visited.count(x * 10 + digit)){
                    dp[i + 1].push_back(x * 10 + digit);
                    visited.insert(x * 10 + digit);
                }
            }
        }
        if(n == 1){
            dp[n].push_back(0);
        }
        return dp[n];
    }
};
