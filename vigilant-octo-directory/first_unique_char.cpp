class Solution{
public:

  int firstUniqueChar(string s){
  
    unordered_map<char, int> temp;
    int dne_flag = -1;
    
    for(int i = 0; s[i] != '\0'; i++){
      temp[s[i]]++;
    }
    
    for( int j = 0; j < s.size(); j++){
      if(temp[s[j]] == 1){
        return j;
      }
    }   
    return dne_flag;
  }
};
