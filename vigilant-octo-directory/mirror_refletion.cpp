/*
first time ever i try to go through the leetcode discussion to understand a solution
pretty good
*/

class Solution {
 public: 
  int mirroReflection(int p, int q){
  
     while( p % 2 == 0 && q % 2 == 0){
     
       p = p /2;
       q = q /2;
     }
     return 1 - p % 2 + q % 2;
  }
};
