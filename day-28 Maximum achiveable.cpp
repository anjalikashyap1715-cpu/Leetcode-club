/*
 * DATE: 26/11/2026
 *
 * PROBLEM LINK:https://leetcode.com/problems/find-the-maximum-achievable-number/description/ 
 * PROBLEM STATEMENT: Given two integers, num and t. A number x is achievable if it can become equal to num after applying the following operation at most t times:

Increase or decrease x by 1, and simultaneously increase or decrease num by 1.
Return the maximum possible value of x.
Example 1:
Input: num = 4, t = 1
Output: 6
Explanation:
Apply the following operation once to make the maximum achievable number equal to num:
Decrease the maximum achievable number by 1, and increase num by 1.
Example 2:
Input: num = 3, t = 2
Output: 7
Explanation:
Apply the following operation twice to make the maximum achievable number equal to num:
Decrease the maximum achievable number by 1, and increase num by 1.
 Constraints:
1 <= num, t <= 50
 

 *
 * ----------------------------------------
 *
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * (Notes, ideas, tricks for quick revision)
 *Each operation can increase the maximum value of x by 2.
To maximize x, increase x and decrease num simultaneously.
We can solve this problem directly using a mathematical formula.
Formula: Maximum x = num + 2 * t.
Always look for patterns in examples before writing code.
 * ----------------------------------------
 * Write insights here
 * ----------------------------------------
 */

#include <iostream>
using namespace std;

class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        return num+2*t;
    }
};