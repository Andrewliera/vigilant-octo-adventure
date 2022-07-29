class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        vector<string> result;
        
        for(const auto& word : words){
            if(pattern_check(word, pattern)){
                result.push_back(word);
            }
        }
        return result;
        
    }
private:
    bool pattern_check(const string& word, const string& pattern){

        if(word.size() != pattern.size()){
            return false;
        }

        unordered_map<char, char> word_map;
        unordered_map<char, char> pattern_map;
        for(int i = 0; i < word.size(); i ++){
            if(word_map.find(word[i]) == word_map.end()){
                if(pattern_map.find(pattern[i]) != pattern_map.end()){
                    return false;
                }

                word_map[word[i]] = pattern[i];
                pattern_map[pattern[i]] = word[i];
            }
            else{
                if(word_map[word[i]] != pattern[i]){
                    return false;
                }
                
                if(pattern_map.find(pattern[i]) == pattern_map.end() ||
                        pattern_map[pattern[i]] != word[i]){
                    return false;
                }
            }
        }
        return true;
    }
};
