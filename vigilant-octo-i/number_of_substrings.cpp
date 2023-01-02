/*
i really liked the CodeWithSunny explenation of this code for this problem which hits both a brute force & optimal solution
*/

class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        
        vector<int> character_index[26];
        
        for(int i = 0; i < s.length(); i++){
            character_index[s[i]-'a'].push_back(i);
        }
        
        int result = 0;
        
        for(auto temp_words:words){
            
            int last_char = -1;
            
            for(int i = 0; i < temp_words.length(); i++){
                
                auto itr = upper_bound(character_index[temp_words[i]-'a'].begin(),
                                       character_index[temp_words[i]-'a'].end(),
                                      last_char);
                
                
                if(itr == character_index[temp_words[i] -'a'].end()){
                    
                    goto h;
                    
                }
                last_char = *itr;
                
                
            }
            result++;
            h:;
        }
        return result;
    }
};
