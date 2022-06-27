class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        int length_1 = s.size();
        int length_2 = t.size();
        
        if(length_1 != length_2){
            return false;
            
        }
        
        unordered_map<char, char> temp_map;
        set<char> temp_set;
        for(int i =0; i < length_1; i++){
            
            char temp_char1 = s[i];
            char temp_char2 = t[i];
           
            if(temp_map.find(temp_char1) != temp_map.end()){
                
                if(temp_map[temp_char1] != temp_char2){
                    return false;
                    
                }
            }
                
                else{
                    if(temp_set.find(temp_char2) != temp_set.end()){
                        return false;
                    }
                    temp_map[temp_char1] = temp_char2;
                    temp_set.insert(temp_char2);
                }
            }
        return true;
    }
};
