53. Maximum Subarray  
Easy  

Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.  
  
A subarray is a contiguous part of an array.  

 
  
Example 1:  

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]  
Output: 6  
Explanation: [4,-1,2,1] has the largest sum = 6.  
  
Example 2:  
  
Input: nums = [1]  
Output: 1  
  
Example 3:  
  
Input: nums = [5,4,-1,7,8]  
Output: 23  

 
  
Constraints:  
  
    1 <= nums.length <= 105  
    -104 <= nums[i] <= 104  

 
  
Follow up: If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.  
  

  https://stackoverflow.com/questions/50581472/what-is-contiguous-subarray  
Answers  
It isn't the contiguous subarray, there are many.   
It's just a subsequence without skipping any elements.   
E.g. [-2, 1], [-2, 1, -3], [2, 1, -5] are all contiguous subarrays of this array,  
 but [2, 1, 4] isn't.
  
    
    What is contiguous subarray  
  *A contiguous subarray is simply a subarray of an array   
  with a condition that the elements of the subarray should be   
  in exact sequence as the sequence of the elements in the array.  
