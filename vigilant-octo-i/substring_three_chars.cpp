class Solution {
public:
    int numberOfSubstrings(string s) {
        
        int substring_counter = 0;
        int length = s.size();
        int temp = 0;
        unordered_map<char, int> temp_map;
        
        for(int i = 0; i < length; i++){
            temp_map[s[i]]++;
            while(temp_map['a'] > 0 &&
                 temp_map['b'] > 0 &&
                 temp_map['c'] > 0){
                
                temp_map[s[temp]]--;
                temp++;
            }
            substring_counter = substring_counter + temp;
            
        }
        return substring_counter;
    }
};
