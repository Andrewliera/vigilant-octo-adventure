class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int reverse_pointer = (m + n - 1); //last index in nums1
        int nums1_pointer = m - 1; // index of largest value in sorted array nums1
        int nums2_pointer = n -1; // index of largest value in sorted array nums2
      
        if(m == 0){
            nums1 = nums2;
            
        }
      
        while(nums1_pointer >= 0 && nums2_pointer >= 0){
            
            if(nums1[nums1_pointer] > nums2[nums2_pointer]){
                nums1[reverse_pointer] = nums1[nums1_pointer];
                nums1_pointer--;
                reverse_pointer--;
            }
            
            else {
                nums1[reverse_pointer] = nums2[nums2_pointer];
                nums2_pointer--;
                reverse_pointer--;
            }
        }
        
        //one final while loop to make sure nothing is left in nums2
        while (nums2_pointer >=0){
            nums1[reverse_pointer] = nums2[nums2_pointer];
            nums2_pointer--;
            reverse_pointer--;
        }
    }
};
