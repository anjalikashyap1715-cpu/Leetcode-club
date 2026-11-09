/*
 * DATE: 01/11/2026
 *
 * PROBLEM LINK:https://leetcode.com/problems/add-digits/description/?envType=problem-list-v2&envId=math 
 * PROBLEM STATEMENT: 
 *
 * ----------------------------------------
 * Write statement notes here
 * Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

 

Example 1:

Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.
Example 2:

Input: num = 0
Output: 0
 

Constraints:

0 <= num <= 231 - 1
 

Follow up: Could you do it without any loop/recursion in O(1) runtime?
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * (Notes, ideas, tricks for quick revision)
 *  This question improved my understanding of loops,
 *  digit manipulation, modulo and division operators,
 *  mathematical optimization, and time complexity in C++.
 *
 * ----------------------------------------
 * 
 */

class Solution {
public:
    int addDigits(int num) {
        if (num == 0)
            return 0;

        return 1 + (num - 1) % 9;
    }
};