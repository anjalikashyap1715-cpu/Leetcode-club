/*
 * DATE: 03/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/fibonacci-number/description/
 * PROBLEM STATEMENT: The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.
Given n, calculate F(n).

 

Example 1:

Input: n = 2
Output: 1
Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.
Example 2:

Input: n = 3
Output: 2
Explanation: F(3) = F(2) + F(1) = 1 + 1 = 2.
Example 3:

Input: n = 4
Output: 3
Explanation: F(4) = F(3) + F(2) = 2 + 1 = 3.
 

Constraints:

0 <= n <= 30
 *
 * ----------------------------------------

 *
 * INSIGHTS GAINED FROM THIS QUESTION:
1. Learned how the Fibonacci sequence works by adding the previous two numbers.
2. Understood how to use three variables a, b, and c.
3. Learned to use a for loop to calculate the next number.
4. Understood how to update variables using a = b and b = c.
5. Learned that we can solve this problem without using an array.
6. Improved my understanding of loops and basic logic building.
 *
 * ----------------------------------------
 * Write insights here
 * ----------------------------------------
 */



class Solution {
public:
    int fib(int n) {
        int a = 0, b = 1, c;

        if(n == 0)
            return 0;

        for(int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }

        return b;
    }
};