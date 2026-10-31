/*
 * DATE: 31/10/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/palindrome-number/description/?envType=problem-list-v2&envId=math
 * PROBLEM STATEMENT:
 * Given an integer x, return true if x is a palindrome, and false otherwise.

 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

Constraints:-231 <= x <= 231 - 1 
 *
 * ----------------------------------------

 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * (Notes, ideas, tricks for quick revision)
 *I LEARNED:

1. How to reverse a number using a loop.
2. How to use % 10 and / 10 to get and remove digits.
3. Why we store the original number.
4. How to check whether a number is palindrome.
5. Why long long is used to avoid overflow.
 * ----------------------------------------
 *
 * ----------------------------------------
 */

class Solution {
public:
    bool isPalindrome(int x) {
      int a = x;
        long long rev = 0;

        if (x < 0)
            return false;

        while (x > 0) {
            rev = rev * 10 + x % 10;
            x = x / 10;
        }

        return a == rev;
      
    }
};