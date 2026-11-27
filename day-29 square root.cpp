/*
 * DATE: 27/11/2026
 *
 * PROBLEM LINK:https://leetcode.com/problems/sqrtx/ 
 * PROBLEM STATEMENT: Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.

For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
Example 1:
Input:
int x = 4;
Output: 2
Explanation: The square root of 4 is 2, so we return 2.
Example 2:
Input:
int x = 8;
Output: 2
Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.
Constraints:
0 <= x <= 231 - 1
 *
 * ----------------------------------------
 * 
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * (Notes, ideas, tricks for quick revision)
 *Use the sqrt() function from the <cmath> library to calculate the square root.
sqrt(x) returns a double value.
When storing the result in an int, the decimal part is removed.
The question asks for the integer part of the square root.
For example, sqrt(8) = 2.828, so the answer is 2.
An alternative approach is Binary Search, which helps solve the problem without using the built-in sqrt() function.
 * ----------------------------------------
 * Write insights here
 * ----------------------------------------
 */

#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int ans = sqrt(x);
        return ans;
    }
};