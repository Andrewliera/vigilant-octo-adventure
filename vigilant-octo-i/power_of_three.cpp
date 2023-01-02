//same as power of 4 solution pretty good, it's slightly faster than most.
//  Runtime   Memory
//   31ms      5.7MB
class Solution {
public:
  bool isPowerofThree(int n){
    if( n ==0 ){
      return false;
    }
    
    while( n != 1){
      if( n % 3 != 0){
        return false;
      }
      
      n /= 3;
    }
    return true;
  }
};



/* Other Solutions 
better explenations for these were on:
https://helloacm.com/cc-coding-exercise-power-of-three-leetcode/ 


Log
since logarithms are the inverse of exponential functions we can use log to check if 
(3^x = n)==true


3^x = n^1
log(3^x) = log(n^1)
x*log(3) = 1*log(n)
x = log(n)/log(3)

note: in helloacmthe post explains 
these types of math solutions have precision errors which is why we have to use ceil & floor


//  Runtime   Memory
//   36ms      6MB
class Solution {
public:
  bool isPowerOfThree(int n){
  
    double x = log10(n) / log10(3);
    
    return (n > 0) && (ceil(x) == floor(x));
  }
};


note:
the valid input numbers are limited
the constraints say
the input range is a 32-bit signed integer
meaning the last valid input would be 1162261467
any power of three can be divided by this number


//  Runtime   Memory
//   38ms      5.9mb
class Solution{
public:
  
  bool isPowerOfThree(int n ){
  
  return(n > 0 ) && (1162261467 % n == 0);
  }
};

we could even store the valid numbers from 1 - 1162261467 in a set

{1, 3, 9, 27, 81, 243, 729, 2187, 6561, 19683, 59049,
177147, 531441, 1594323, 4782969, 14348907, 43046721,
129140163, 387420489, 1162261467}; 

and return list.find(n) != list.end 
as another alternative 
but the runtime increases to 275ms & memory space 30.7MB
*/
