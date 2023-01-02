class Solution {
public:
    int longestPalindrome(string s) {
        
        int length = s.size();
        
        if(length <= 1){
            return length;
        }
        
        int palindrome_length = 0;
        int flag = 0;
        vector<int> temp_map(256);
        
        for(char character : s){
            temp_map[character]++;
        }
        
        for(int i : temp_map){
            if(i & 1){
                flag = 1;
                palindrome_length += (i - 1);
                
            }else{
                palindrome_length += i;
            }
        }
        return palindrome_length + flag;
    }
};
