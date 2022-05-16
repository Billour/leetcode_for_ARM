class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> map = new HashMap<>();
        for(int i = 0; i <nums.length; i++){
            map.put(nums[i], i);
        }
        for(int i =0; i< nums.length; i++){
            int com = target - nums[i];
            if(map.containsKey(com) && map.get(com) != i){
                return new int[] {i, map.get(com)};
            }
        }
        
        return null;
    }
}  
/*
Complexity Analysis

Time complexity: O(n^2)O(n 
2
 ). For each element, we try to find its complement by looping through the rest of the array which takes O(n)O(n) time. Therefore, the time complexity is O(n^2)O(n 
2
 ).

Space complexity: O(1)O(1). The space required does not depend on the size of the input array, so only constant space is used.

*/