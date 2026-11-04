/*
 * DATE: 04/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/three-divisors/
 * PROBLEM STATEMENT: Given an integer n, return true if n has exactly three positive divisors. Otherwise, return false.

An integer m is a divisor of n if there exists an integer k such that n = k * m.

 

Example 1:

Input: n = 2
Output: false
Explanation: 2 has only two divisors: 1 and 2.
Example 2:

Input: n = 4
Output: true
Explantion: 4 has three divisors: 1, 2, and 4.
 

Constraints:

1 <= n <= 104
 *
 * ----------------------------------------
 * Write statement notes here
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * (Notes, ideas, tricks for quick revision)
1.Learned how to find all positive divisors of a number.
2.Used the modulo (%) operator to check whether a number is completely divisible.
3.Used a for loop to check divisors from 1 to n.
4.Used a count variable to count the total number of divisors.
5.Understood how to use count == 3 to check for exactly three divisors.
6.Learned that return true is given when the number has exactly 3 divisors; otherwise, it returns false.
 * ----------------------------------------
 */

class Solution {
public:
    bool isThree(int n) {
        int count = 0;

        for(int i = 1; i <= n; i++) {
            if(n % i == 0) {
                count++;
            }
        }

        return count == 3;
    }
};