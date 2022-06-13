class Solution {
    public String longestPalindrome(String s) {
        if (s == null || s.length() < 1) return "";
        int start = 0, end = 0;
        for (int i = 0; i < s.length(); i++) {
            int len1 = expandAroundCenter(s, i, i);
            int len2 = expandAroundCenter(s, i, i + 1);
            int len = Math.max(len1, len2);
            if (len > end - start) {
                start = i - (len - 1) / 2;
                end = i + len / 2;
            }
        }
        return s.substring(start, end + 1);
    }

    private int expandAroundCenter(String s, int left, int right) {
        int L = left, R = right;
        while (L >= 0 && R < s.length() && s.charAt(L) == s.charAt(R)) {
            L--;
            R++;
        }
    return R - L - 1;
    }
}

public class LongestPalindromicSubstring {
   public static void main(String[] args) {
      String sInput = "cbbd";
      Solution s1 = new Solution();

      String result = s1.longestPalindrome(sInput);
      System.out.println(result);
      
   }
}

/*
Approach 4: Expand Around Center

In fact, we could solve it in O(n2)O(n^2)O(n2) time using only constant space.

We observe that a palindrome mirrors around its center. 
Therefore, a palindrome can be expanded from its center, and 
there are only 2n−12n - 12n−1 such centers.

You might be asking why there are 2n−12n - 12n−1 but not nnn centers? 
The reason is the center of a palindrome can be in between two letters. 

Such palindromes have even number of letters (such as "abba") and 
its center are between the two 'b's.
Refere:

 */