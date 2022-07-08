//in this leetcode problem we search for the first bad version of an api 
// on the outside the function takes int n-> the API version you wish to know is good or not
// we can mix in the binary search algortithm from the previous leetcode 75 problem rather than 
//brute force it with a for loop from 1->n
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        int min = 0;
        int max = n;
        int mid_pointer;
        int result = 0;
        
        while( min<= max){
            
            mid_pointer = min + (max - min) /2;
            
            if(isBadVersion(mid_pointer) == true){
                max = mid_pointer -1;
                result = mid_pointer;
            }
            else{
                min = mid_pointer+1;
            }
        }
        return result;
        
    }
};
