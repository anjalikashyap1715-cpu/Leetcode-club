/*
 * DATE: 21/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/description/
 * PROBLEM STATEMENT: You are given a positive integer array nums.

The element sum is the sum of all the elements in nums.
The digit sum is the sum of all the digits (not necessarily distinct) that appear in nums.
Return the absolute difference between the element sum and digit sum of nums.

Note that the absolute difference between two integers x and y is defined as |x - y|.

 

Example 1:

Input: nums = [1,15,6,3]
Output: 9
Explanation: 
The element sum of nums is 1 + 15 + 6 + 3 = 25.
The digit sum of nums is 1 + 1 + 5 + 6 + 3 = 16.
The absolute difference between the element sum and digit sum is |25 - 16| = 9.
Example 2:

Input: nums = [1,2,3,4]
Output: 0
Explanation:
The element sum of nums is 1 + 2 + 3 + 4 = 10.
The digit sum of nums is 1 + 2 + 3 + 4 = 10.
The absolute difference between the element sum and digit sum is |10 - 10| = 0.
 

Constraints:

1 <= nums.length <= 2000
1 <= nums[i] <= 2000
 *
 * ----------------------------------------
 * Write statement notes here
 * ----------------------------------------
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * (Notes, ideas, tricks for quick revision)
 *Element sum means adding all the numbers present in the array.
Digit sum means adding all individual digits of every number.
Use two variables to calculate element sum and digit sum separately.
Use a for loop to traverse the array.
Use % 10 to extract the last digit of a number.
Use / 10 to remove the last digit.
Use a while loop to repeat the digit extraction until the number becomes zero.
Use abs() to get the absolute difference between two sums.
In C++, variable names are case-sensitive (DigitSum and digitSum are different).
 * ----------------------------------------
 * Write insights here
 * ----------------------------------------
 */
#include <vector>
#include<cstdlib>
using namespace std;
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {

        int elementSum = 0;
        int DigitSum = 0;

        for(int i = 0; i < nums.size(); i++) {
            elementSum = elementSum + nums[i];

            int num = nums[i];

            while(num > 0) {
                DigitSum = DigitSum + num % 10;
                num = num / 10;
            }
        }

        return abs(elementSum - DigitSum);
    }
};