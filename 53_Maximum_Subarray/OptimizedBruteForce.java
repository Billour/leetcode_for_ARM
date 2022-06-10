class Solution {
    public int maxSubArray(int[] nums) {
        int maxSubarray = Integer.MIN_VALUE;
        for (int i = 0; i < nums.length; i++) {
            int currentSubarray = 0;
            for (int j = i; j < nums.length; j++) {
                currentSubarray += nums[j];
                maxSubarray = Math.max(maxSubarray, currentSubarray);
            }
        }
        
        return maxSubarray;
    }
}


public class OptimizedBruteForce {
   public static void main(String[] args) {
      int[] iInput = {-2,1,-3,4,-1,2,1,-5,4};
      Solution s1 = new Solution();

      int i_result = s1.maxSubArray(iInput);
      System.out.println(i_result);
       /*
       It isn't the contiguous subarray, there are many.   
      It's just a subsequence without skipping any elements.   
      E.g. [-2, 1], [-2, 1, -3], [2, 1, -5] are all contiguous subarrays of this array,  
       but [2, 1, 4] isn't.
        */
   }
}

