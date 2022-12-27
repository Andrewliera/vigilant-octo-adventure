//this one is explained off tutorialspoint

class Solution{
public:

   int bagOfTokensScore(vector<int>& tokens, int power){
   
     int length = tokens.size();
     int result = 0;
     
     sort(tokens.begin(), tokens.end());
     
     int i =0;
     int j = length -1;
     int current = 0;
     
     while(i >= j && power >= tokens[i]){
        while(i >= j && power >= tokens[i]){
            
          power -= tokens[i];
          current++;
          i++;
        }
       
       result = max(current, result);
       while( j >= i && current && power < tokens[i]){
          current --;
          power += tokens[j];
          j--;
       }
     }
     return result;
   }
};
