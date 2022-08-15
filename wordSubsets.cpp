class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        
        vector<string> result;
        vector<int> target(26);
        
        for(const string& subset: words2){
            vector<int> temp = counter(subset);
            
            for(int i = 0; i < 26; i++){
                target[i] = max(target[i], temp[i]);
            }
            
        }
        for(const string& superset : words1){
                
                if(isUniversal(counter(superset), target)){
                    result.push_back(superset);
                }
            
            }
        return result; 
        
    }
private: 
    vector<int> counter(const string s){
        vector<int> count(26);
        for(char c : s){
            ++count[c - 'a'];
        }
        return count;
    }
    
    bool isUniversal(vector<int> countA, vector<int>& countB){
        for(int i= 0; i < 26; i++){
            if (countA[i] < countB[i]){
                return false;
            } 
        }
        return true;
    }
};
