class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int length_1 = s.size();
        int length_2 = t.size();
        
        if(length_1 > length_2){
            return false;
        }
        if(length_1 == 0){
            return true;
        }
        
        int s_index = 0;      
        int t_index = 0;
        
        while(t_index < length_2){
         if(s[s_index] != t[t_index]){
             t_index++;
         }   
            else {
                s_index++;
                t_index++;
            }
            if(s_index == (length_1 - 1) && s[s_index] == t[t_index]){
                return true;
            }
        }
        return false;
    }
};
