/*
 * DATE: 02/11/2026
 *
 * PROBLEM LINK: https://leetcode.com/problems/missing-number/?envType=problem-list-v2&envId=math
 * PROBLEM STATEMENT: Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

 

Example 1:

Input: nums = [3,0,1]

Output: 2

Explanation:

n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.

Example 2:

Input: nums = [0,1]

Output: 2

Explanation:

n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.

Example 3:

Input: nums = [9,6,4,2,3,5,7,0,1]

Output: 8

Explanation:

n = 9 since there are 9 numbers, so all numbers are in the range [0,9]. 8 is the missing number in the range since it does not appear in nums.

 
 

 

 

Constraints:

n == nums.length
1 <= n <= 104
0 <= nums[i] <= n
All the numbers of nums are unique.
 

Follow up: Could you implement a solution using only O(1) extra space complexity and O(n) runtime complexity?
 *
 * ----------------------------------------
 * 
 *
 * INSIGHTS GAINED FROM THIS QUESTION:
 * 1. Learned how to find the size of an array using nums.size().

2. Learned the formula to calculate the sum of numbers
   from 0 to n:
   n * (n + 1) / 2

3. Learned how to use a for loop to traverse
   all elements of an array.

4. Instead of calculating the array sum separately,
   I directly subtracted each array element from sum.

5. After subtracting all present numbers,
   the remaining value is the missing number.

6. Understood that sorting is not required
   to solve this problem.

7. Time Complexity: O(n)
   Space Complexity: O(1)

8. Main Learning:
   A mathematical formula can help solve
   an array problem easily and efficiently.
 *
 * ----------------------------------------
 
 */
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=(n*(n+1))/2;
        for(int i=0;i<n;i++){
            sum-=nums[i];
        }
        return sum;
    }
};
