class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        const vector<string> morse{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        set<string> result;
        
        for(const string& word: words){
            string temp;
            
            for(const char c : word){
                temp += morse[c - 'a'];
            }
            result.insert(temp);
        }
        return result.size();
        
    }
};
