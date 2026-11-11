/*
 * DATE: 11/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/
 * PROBLEM STATEMENT: Given an integer number n, return the difference between the product of its digits and the sum of its digits.
 

Example 1:

Input: n = 234
Output: 15 
Explanation: 
Product of digits = 2 * 3 * 4 = 24 
Sum of digits = 2 + 3 + 4 = 9 
Result = 24 - 9 = 15
Example 2:

Input: n = 4421
Output: 21
Explanation: 
Product of digits = 4 * 4 * 2 * 1 = 32 
Sum of digits = 4 + 4 + 2 + 1 = 11 
Result = 32 - 11 = 21
 

Constraints:

1 <= n <= 10^5
 *
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * (Notes, ideas, tricks for quick revision)
 *  1. Use to_string(n) to convert an integer into a string.
 * 2. Use s[i] to access each digit.
 * 3. Use s[i] - '0' to convert a character digit into an integer.
 * 4. Initialize sum = 0 and product = 1.
 * 5. Use a for loop to visit each digit.
 * 6. Calculate product - sum to get the final answer.


Time Complexity: O(log n)
Space Complexity: O(log n)
*
 *
 * ----------------------------------------
 * Write insights here
 * ----------------------------------------
 */
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int subtractProductAndSum(int n) {
        string s=to_string(n);
        int sum=0;
        int product=1;
        int difference;
        for(int i=0;i<s.length();i++){
            int digit=s[i]-'0';
            sum=sum+digit;
            product=product*digit;
            difference=product-sum;
            }
            return difference;
            


    }
    
};