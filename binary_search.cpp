class Solution{
public:
  int search(vector<int>& nums, int target){
    
    int max = nums.size();
    int current_target = nums.size();
    int min = 0;
    int mid_pointer;


    /* one leet code test case expects -1 with the 
     * input-> nums :[1]  target:2 
     * this will hit a run time error since the
     * later code will still has bugs
     * for example
     * DSA's courses explain that using 
     * mid_pointer = min + (max - min)/2
     * allows us to better home in on our target number
     * and that (max - min)/ 2 
     *
     * quick snippet:
     * "if we calculate the middle index like
     * this it means our code is not 100% correct...
     * it fails for larger values of int variables 
     * low and high.
     * it fails if the sum of low and high big"
     * 
     * 
     *
     * TLDR:  leetcode test case leads to an error
     * V this is a quick fix V
      if(max ==1 && nums[max -1] != current_target){
        return -1; 
     }
     */

      while(min <= max{

          mid_pointer = min + (max - min )/2;

          if(nums[mid_pointer] == current_target){
            return mid_pointer;
          }
          else if(nums[mid_pointer] < current_target){
            min = mid_pointer + 1;
          }
          else{
            max = mid_pointer - 1;
          }
          }
          return -1;
  }
}
